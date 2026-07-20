/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:10:14 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:56:02 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Allocates and zero-es a block of memory.
 * @param count	the amount of members in the block
 * @param size	the size of the memory for each block
 * @return		a pointer to the allocated memory
 */
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (size != 0 && count > ((size_t) - 1) / size)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, total_size));
}
