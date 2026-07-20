/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:56:17 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:35:10 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Copies a block of memory to another.
 * @param dest	the dest
 * @param src	the source
 * @param size	the size of the pointer
 * @return		the dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*usrc;
	unsigned char	*udest;
	int				i;

	usrc = (unsigned char *) src;
	udest = (unsigned char *) dest;
	i = 0;
	while (i < (int) size)
	{
		udest[i] = usrc[i];
		i++;
	}
	return (dest);
}
