/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_n_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:30:55 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a char 'n' times to a file descriptor.
 * @param fd	the file descriptor
 * @param c		the char
 * @param n		the amount of the char to print
 * @return		the number of bytes written
 */
ssize_t	ft_putchar_n_fd(int fd, char c, int n)
{
	ssize_t	written;

	written = 0;
	while (n-- > 0)
		written += ft_putchar_fd(fd, c);
	return (written);
}
