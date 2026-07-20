/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:33:44 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:53:05 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Creates a substring from a string.
 * @param str	the string
 * @param start	the start index of the string
 * @param len	the length of the substring
 * @return		a pointer to the substring
 */
char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	str_len;
	size_t	avail;

	str_len = ft_strlen(str);
	if ((size_t) start >= str_len)
		return (ft_strdup(""));
	avail = str_len - start;
	if (len > avail)
		len = avail;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &str[start], len + 1);
	return (ptr);
}
