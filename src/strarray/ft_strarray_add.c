/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:41:12 by sming-zh          #+#    #+#             */
/*   Updated: 2025/12/15 19:33:25 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*populate(char **dest, char **src, size_t size_src, char *str)
{
	size_t	y;

	y = 0;
	while (y < size_src)
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = ft_strdup(str);
	if (dest[y])
		dest[y + 1] = NULL;
	return (dest[y]);
}

/**
 * Adds an element into a string array.
 * On success, the original array will be freed and replaced with a new array
 * with the original elements preserved.
 * @param arr	the pointer to a string array
 * @param str	the string to add
 * @return		the new array if success, else NULL
 */
char	**ft_strarray_add(char ***arr, const char *str)
{
	size_t	size_arr;
	char	**arr_new;

	size_arr = 0;
	if (*arr)
		size_arr = ft_strarray_size(*((const char ***) arr));
	arr_new = malloc((size_arr + 2) * sizeof(char *));
	if (!arr_new)
		return (NULL);
	if (!populate(arr_new, *arr, size_arr, (char *) str))
	{
		free(arr_new);
		return (NULL);
	}
	free(*arr);
	*arr = arr_new;
	return (arr_new);
}
