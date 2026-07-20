/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:18:34 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Duplicates a string.
 * @param str	the string to duplicate
 * @return		the pointer to the duplicated string
 */
char	*ft_strdup(const char *str)
{
	size_t	str_len;
	char	*ptr;

	str_len = ft_strlen(str);
	ptr = (char *) malloc(str_len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str, str_len + 1);
	return (ptr);
}
