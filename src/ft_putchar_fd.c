/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:23:30 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Writes a char to a file descriptor.
 * @param fd	the file descriptor
 * @param c		the char
 * @return		the number of bytes written
 */
ssize_t	ft_putchar_fd(int fd, char c)
{
	return (write(fd, &c, 1));
}
