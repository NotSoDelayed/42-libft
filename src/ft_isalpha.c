/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:57:05 by sming-zh          #+#    #+#             */
/*   Updated: 2025/09/17 16:47:01 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @param c	the char
 * @return	whether the char is an alphabetical char
 */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
