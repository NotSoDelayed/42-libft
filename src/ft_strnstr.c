/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:36:11 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:51:32 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches a string from a string up to the first `len` chars in haystack.
 * @param haystack	the string
 * @param needle	the part of string to search in haystack
 * @param len		the amount of chars to search in haystack
 * @return 			a pointer to the found substring, else NULL
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (!*needle)
		return ((char *) haystack);
	if (len == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (needle_len > ft_strlen(haystack))
		return (NULL);
	i = 0;
	while (*haystack && i + needle_len <= len)
	{
		if ((unsigned char) *haystack == (unsigned char) *needle)
		{
			if (ft_strncmp(haystack, needle, needle_len) == 0)
				return ((char *) haystack);
		}
		haystack++;
		i++;
	}
	return (NULL);
}
