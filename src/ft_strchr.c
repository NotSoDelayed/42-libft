/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:34:19 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 03:02:21 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Searches through the string for a given character.
 * @param str	the string
 * @param c		the char to search
 * @return		a pointer to the first occurrence of the char
 */
char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str && *str != (unsigned char) c)
		str++;
	if (*str == (unsigned char) c)
		return ((char *) str);
	return (NULL);
}
