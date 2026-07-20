/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:56:40 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/05 12:55:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Creates a string from 2 other strings.
 * @param head	the first string
 * @param tail	the second string
 * @return		a pointer to the joined string
 */
char	*ft_strjoin(const char *head, const char *tail)
{
	char	*str;
	char	*str_copy;

	str = malloc(ft_strlen(head) + ft_strlen(tail) + 1);
	if (!str)
		return (NULL);
	str_copy = str;
	while (*head)
		*str_copy++ = *head++;
	while (*tail)
		*str_copy++ = *tail++;
	*str_copy = '\0';
	return (str);
}
