/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:05:17 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/05 12:55:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start_index(const char *str, const char *set)
{
	int	start;
	int	i;

	start = 0;
	while (str[start])
	{
		i = 0;
		while (set[i])
		{
			if (str[start] == set[i])
				break ;
			i++;
		}
		if (!set[i])
			return (start);
		start++;
	}
	return (start);
}

static int	get_end_index(const char *str, const char *set)
{
	int	end;
	int	i;

	end = ft_strlen(str) - 1;
	while (end >= 0)
	{
		i = 0;
		while (set[i])
		{
			if (str[end] == set[i])
				break ;
			i++;
		}
		if (!set[i])
			return (end);
		end--;
	}
	return (end);
}

/**
 * Trims a part of string on both ends of a string.
 * @param str	the string to be trimmed by
 * @param set	the substring
 */
char	*ft_strtrim(const char *str, const char *set)
{
	int		start;
	int		end;

	start = get_start_index(str, set);
	if (!str[start])
		return (ft_strdup(""));
	end = get_end_index(str, set);
	return (ft_substr(str, start, end - start + 1));
}
