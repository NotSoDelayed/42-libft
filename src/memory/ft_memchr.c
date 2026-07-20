/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:24:55 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:50:37 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * Searches through the memory block for a given character.
 * @param ptr	the pointer
 * @param c		the char to search
 * @param size	the size of the pointer
 * @return		a pointer to the first occurrence of the char
 */
void	*ft_memchr(const void *ptr, int c, size_t size)
{
	unsigned char	*uptr;
	size_t			i;

	uptr = (unsigned char *) ptr;
	i = 0;
	while (i < size)
	{
		if (uptr[i] == (unsigned char) c)
			return (&uptr[i]);
		i++;
	}
	return (NULL);
}
