/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:32:51 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a string followed by a newline to a file descriptor.
 * @param fd	the file descriptor
 * @param str	the string
 * @return		the amount of bytes written
 */
ssize_t	ft_putendl_fd(int fd, const char *str)
{
	ssize_t	written;

	written = ft_putstr_fd(fd, str);
	written += write(fd, "\n", 1);
	return (written);
}
