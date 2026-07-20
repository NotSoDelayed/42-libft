/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:07:31 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	word_count(const char *str, char c)
{
	int	count;

	while (*str && *str == c)
		str++;
	if (!*str)
		return (0);
	count = 0;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		count++;
		while (*str && *str == c)
			str++;
	}
	return (count);
}

/**
 * Splits a string by a delimiter.
 * @param str	the string to be split
 * @param c		the delimiter
 * @return		a pointer to an array of string
 */
char	**ft_split(const char *str, char c)
{
	int		words;
	char	**strs;
	int		i;
	int		len;

	words = word_count(str, c);
	strs = malloc(sizeof(char *) * (words + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (!*str)
			break ;
		len = 0;
		while (str[len] && str[len] != c)
			len++;
		strs[i++] = ft_substr(str, 0, len);
		str += len;
	}
	strs[i] = NULL;
	return (strs);
}
