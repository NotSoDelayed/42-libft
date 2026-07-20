/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_join.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:10:02 by sming-zh          #+#    #+#             */
/*   Updated: 2025/12/13 19:13:32 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	get_joined_length(const char **strs)
{
	size_t	len_total;

	len_total = 0;
	while (*strs)
	{
		len_total += ft_strlen(*strs);
		strs++;
		if (*strs)
			len_total++;
	}
	return (len_total);
}

/**
 * Joins a string array with a given delimiter.
 * @param strs	the array of string
 * @param c		the delimiter
 * @return		a unique pointer to the created string
 */
char	*ft_strarray_join_c(const char **strs, int c)
{
	char	*joined;
	int		i;
	char	*elem;

	joined = malloc(get_joined_length(strs) + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (*strs)
	{
		elem = (char *) *strs;
		while (*elem)
			joined[i++] = *elem++;
		strs++;
		if (*strs)
			joined[i++] = (unsigned char) c;
	}
	joined[i] = 0;
	return (joined);
}
