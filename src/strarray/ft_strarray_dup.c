/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_dup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:58:18 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Duplicates a string array.
 * @param arr	the string array
 * @return		a pointer to the created array
 */
char	**ft_strarray_dup(const char **arr)
{
	char	**copy;
	int		i;

	copy = malloc(sizeof(char *) * (ft_strarray_size(arr) + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		copy[i] = ft_strdup(arr[i]);
		i++;
	}
	copy[i] = NULL;
	return (copy);
}
