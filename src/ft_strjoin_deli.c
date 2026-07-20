/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_deli.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:06:57 by sming-zh          #+#    #+#             */
/*   Updated: 2025/12/03 19:34:19 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Creates a new string by joining 2 strings with a string delimeter.
 * @param str1	the first string
 * @param str2	the second string
 * @param deli	the delimeter
 * @return		a pointer to the joined string
 */
char	*ft_strjoin_deli(const char *str1, const char *str2, const char *deli)
{
	size_t	str1_len;
	size_t	str2_len;
	size_t	deli_len;
	char	*ptr;

	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	deli_len = ft_strlen(deli);
	ptr = malloc(str1_len + str2_len + deli_len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str1, str1_len + 1);
	ft_strlcpy(ptr + str1_len, deli, deli_len + 1);
	ft_strlcpy(ptr + str1_len + deli_len, str2, str2_len + 1);
	return (ptr);
}
