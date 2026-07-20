/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:19:54 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 18:28:55 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_util.h"
#include "libft.h"

int	print_pointer(int fd, unsigned long num)
{
	int	written;

	if (num == 0)
		return (ft_putstr_fd(fd, "(nil)"));
	written = ft_putstr_fd(fd, "0x");
	written += ft_putnbr_base(fd, num, HEX_LOWER);
	return (written);
}

int	print_string(int fd, const char *str)
{
	if (!str)
		str = "(null)";
	return (ft_putstr_fd(fd, str));
}
