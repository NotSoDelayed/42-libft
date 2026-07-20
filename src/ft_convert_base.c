/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:55:47 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:46:10 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*handle_convert_base(unsigned long n, const char *base, int size)
{
	char	*str;
	int		len_base;
	int		i;

	str = malloc(size + 1);
	if (!str)
		return (NULL);
	len_base = (int) ft_strlen(base);
	i = size;
	str[i--] = '\0';
	str[i] = '0';
	while (n > 0)
	{
		str[i] = base[n % len_base];
		n /= len_base;
		i--;
	}
	return (str);
}

/**
 * Converts a long to another base in string.
 * @param n		the long
 * @param base	the base
 * @return		the converted long in string
 */
char	*ft_convert_base(unsigned long n, const char *base)
{
	int				size;
	unsigned long	n2;

	if (ft_strlen(base) < 2)
		return (NULL);
	size = 0;
	n2 = n;
	if (n2 == 0)
		size++;
	while (n2 > 0)
	{
		n2 /= ft_strlen(base);
		size++;
	}
	return (handle_convert_base(n, base, size));
}
