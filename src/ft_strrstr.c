/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:23:10 by sming-zh          #+#    #+#             */
/*   Updated: 2025/11/06 13:08:50 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches a string from a string in haystack backwards.
 * @param haystack	the string
 * @param needle	the part of string to search in haystack
 * @return 			a pointer to the found substring, else NULL
 */
char	*ft_strrstr(const char *haystack, const char *needle)
{
	size_t	needle_len;
	size_t	haystack_len;
	int		i;

	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	if (needle_len > haystack_len)
		return (NULL);
	i = haystack_len - needle_len;
	while (i >= 0)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *) &haystack[i]);
		i--;
	}
	return (NULL);
}
