/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:55:02 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Creates a new string from a string applied by the given function.
 * @param str	the string
 * @param f		the function to apply to each char
 * @return		a pointer to the produced string
 */
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	newstr = malloc(ft_strlen(str) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		newstr[i] = f(i, str[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
