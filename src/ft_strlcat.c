/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:24:35 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 02:05:29 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Safely concat a string with another string.
 * @param dest	the dest
 * @param src	the string to be appended to 'dest'
 * @param size	the length of `src` (`\0` inclusive) to be concat
 * @return		the length of string expected to be created
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len == size)
		return (src_len + size);
	ft_strlcpy(&dest[dest_len], src, size - dest_len);
	return (dest_len + src_len);
}
