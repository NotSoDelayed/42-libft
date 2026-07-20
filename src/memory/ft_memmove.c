/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:15:21 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:35:26 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Safely copies a block of memory to another.
 * @param dest	the dest
 * @param src	the source
 * @param size	the size of the pointer
 * @return		the dest
 */
void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*usrc;
	unsigned char	*udest;

	if (dest > src)
	{
		usrc = (unsigned char *) src;
		udest = (unsigned char *) dest;
		while (size-- > 0)
			udest[size] = usrc[size];
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
