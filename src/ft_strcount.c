/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:20:42 by sming-zh          #+#    #+#             */
/*   Updated: 2026/05/07 12:34:31 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the amount of `sub` from the given string.
 * @param str		the string
 * @param sub	the substring
 * @return			the amount of `sub` from `str`
 */
int	ft_strcount(const char *str, const char *sub)
{
	int		n;
	char	*ptr;
	int		sub_len;

	if (ft_strcmp(sub, "") == 0)
		return (0);
	ptr = ft_strstr(str, sub);
	if (!ptr)
		return (0);
	sub_len = ft_strlen(sub);
	n = 0;
	while (ptr)
	{
		n++;
		str = ptr + sub_len;
		ptr = ft_strstr(str, sub);
	}
	return (n);
}
