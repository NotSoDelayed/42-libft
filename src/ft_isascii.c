/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:33:34 by sming-zh          #+#    #+#             */
/*   Updated: 2025/09/17 16:47:07 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @param c	the char
 * @return	whether the char is within the standard ASCII range
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
