/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:59:43 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/**
 * Searches a string from a string in haystack.
 * @param haystack	the string
 * @param needle	the part of string to search in haystack
 * @return 			a pointer to the found substring, else NULL
 */
char	*ft_strstr(const char *haystack, const char *needle)
{
	return (ft_strnstr(haystack, needle, INT_MAX));
}
