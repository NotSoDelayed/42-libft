/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:46:21 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:57:58 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a number in a specific base to a file descriptor.
 * @param fd	the file descriptor
 * @param num	the number
 * @param base	the base
 * @return		the amount of bytes written
 */
int	ft_putnbr_base(int fd, unsigned long num, const char *base)
{
	size_t	base_len;
	int		written;

	base_len = ft_strlen(base);
	written = 0;
	if (num >= base_len)
		written += ft_putnbr_base(fd, num / base_len, base);
	written += ft_putchar_fd(fd, base[num % base_len]);
	return (written);
}
