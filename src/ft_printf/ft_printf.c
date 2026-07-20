/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:28:58 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 18:36:15 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_util.h"
#include "libft.h"
#include <stdarg.h>

static int	print_placeholder(int fd, const char *str, va_list *args)
{
	if (ft_strncmp(str, "%c", 2) == 0)
		return (ft_putchar_fd(fd, (char) va_arg(*args, int)));
	if (ft_strncmp(str, "%s", 2) == 0)
		return (print_string(fd, va_arg(*args, char *)));
	if (ft_strncmp(str, "%p", 2) == 0)
		return (print_pointer(fd, va_arg(*args, unsigned long)));
	if (ft_strncmp(str, "%d", 2) == 0)
		return (ft_putnbr_fd(fd, va_arg(*args, int)));
	if (ft_strncmp(str, "%i", 2) == 0)
		return (ft_putnbr_fd(fd, va_arg(*args, int)));
	if (ft_strncmp(str, "%u", 2) == 0)
		return (ft_putnbr_fd(fd, va_arg(*args, unsigned int)));
	if (ft_strncmp(str, "%x", 2) == 0)
		return (ft_putnbr_base(fd, va_arg(*args, unsigned long), HEX_LOWER));
	if (ft_strncmp(str, "%X", 2) == 0)
		return (ft_putnbr_base(fd, va_arg(*args, unsigned long), HEX_UPPER));
	if (ft_strncmp(str, "%%", 2) == 0)
		return (ft_putchar_fd(fd, '%'));
	return (0);
}

static int	_ft_printf(int fd, const char *str, va_list *args)
{
	int	written;

	written = 0;
	while (*str)
	{
		if (*str == '%')
		{
			written += print_placeholder(fd, str, args);
			str += 2;
		}
		else
		{
			written += ft_putchar_fd(fd, *str);
			str++;
		}
	}
	return (written);
}

/**
 * Writes a formatted string to STDOUT.
 * @param str	the string with placeholders (ie %s, %d)
 * @param ...	the arguments for the placeholders
 * @return		the total amount of characters printed
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		written;

	va_start(args, str);
	written = _ft_printf(1, str, &args);
	va_end(args);
	return (written);
}

/**
 * Writes a formatted string to a specified file descriptor.
 * @param fd	the file descriptor to write to
 * @param str	the string with placeholders (ie %s, %d)
 * @param ...	the arguments for the placeholders
 * @return		the total amount of characters printed
 */
int	ft_printf_fd(int fd, const char *str, ...)
{
	va_list	args;
	int		written;

	va_start(args, str);
	written = _ft_printf(fd, str, &args);
	va_end(args);
	return (written);
}
