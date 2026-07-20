/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:03:32 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 01:34:43 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets a block of memory to 0.
 * @param ptr	the pointer
 * @param size	the size of the pointer
 */
void	ft_bzero(void *ptr, size_t size)
{
	ft_memset(ptr, 0, size);
}
