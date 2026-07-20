/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:15:16 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 17:25:02 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/**
 * Writes a whole number to a file descriptor.
 * @param fd	the file descriptor
 * @param n		the number
 * @return		the amount of bytes written
 */
ssize_t	ft_putnbr_fd(int fd, long n)
{
	ssize_t	written;
	char	c;

	if (n == LONG_MIN)
		return (ft_putnbr_fd(fd, LONG_MIN));
	written = 0;
	if (n < 0)
	{
		written = ft_putchar_fd(fd, '-');
		n = -n;
	}
	if (n >= 10)
		written += ft_putnbr_fd(fd, n / 10);
	c = (n % 10) + '0';
	written += write(fd, &c, 1);
	return (written);
}
