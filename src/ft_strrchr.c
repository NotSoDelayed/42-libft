/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:50:51 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:29:21 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param str	the string
 * @param c		the char to search
 * @return		a pointer to the first occurrence of the char
 */
char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0 && str[i] != (unsigned char) c)
		i--;
	if (str[i] == (unsigned char) c)
		return ((char *) &str[i]);
	return (NULL);
}
