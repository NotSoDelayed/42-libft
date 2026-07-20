/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:51:08 by sming-zh          #+#    #+#             */
/*   Updated: 2025/12/26 16:59:33 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Returns the pointer of the last string in the array.
 * If the first element in the array is NULL, NULL will be returned.
 * @param arr	the string array
 * @return		the pointer of the last string in the array
 */
char	*ft_strarray_last(const char **arr)
{
	if (!*arr)
		return (NULL);
	while (*(arr + 1))
		arr++;
	return ((char *) *arr);
}
