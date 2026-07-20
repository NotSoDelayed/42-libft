/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 17:09:53 by sming-zh          #+#    #+#             */
/*   Updated: 2026/01/07 17:09:54 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes an array of string to STDOUT.
 * @param arr	the string array
 * @return		the total amount of characters printed
 */
int	ft_strarray_print(const char **arr)
{
	int	printed;
	int	printed_total;

	printed_total = 0;
	while (*arr)
	{
		printed = ft_printf("%s\n", *arr);
		if (printed < 0)
			return (printed_total);
		printed_total += printed;
		arr++;
	}
	return (printed_total);
}
