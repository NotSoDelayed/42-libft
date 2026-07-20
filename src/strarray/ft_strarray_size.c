/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:47:26 by sming-zh          #+#    #+#             */
/*   Updated: 2025/12/06 16:45:16 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @param array	the string array
 * @return		the size of the array
 */
size_t	ft_strarray_size(const char **array)
{
	size_t	count;

	count = 0;
	while (array[count])
		count++;
	return (count);
}
