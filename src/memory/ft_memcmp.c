/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:29:31 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:50:52 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Compares a block of memory with another.
 * @param ptr1	a pointer
 * @param ptr2	another pointer
 * @param size	the amount of chars to be checked
 * @return		the first char difference in both strings
 */
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*uptr1;
	unsigned char	*uptr2;
	size_t			i;

	if (size == 0)
		return (0);
	uptr1 = (unsigned char *) ptr1;
	uptr2 = (unsigned char *) ptr2;
	i = 0;
	while (i < size)
	{
		if (uptr1[i] != uptr2[i])
			return (uptr1[i] - uptr2[i]);
		i++;
	}
	return (0);
}
