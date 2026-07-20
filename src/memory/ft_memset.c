/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:47:55 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:34:16 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Sets a block of memory with a specific value.
 * @param ptr	the dest
 * @param c		the value
 * @param size	the size of the pointer
 * @return		the ptr
 */

void	*ft_memset(void *ptr, int c, size_t size)
{
	unsigned char	*uptr;

	uptr = (unsigned char *) ptr;
	while (size > 0)
	{
		*uptr = (unsigned char) c;
		uptr++;
		size--;
	}
	return (ptr);
}
