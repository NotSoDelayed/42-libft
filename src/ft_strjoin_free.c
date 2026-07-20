/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:59:31 by sming-zh          #+#    #+#             */
/*   Updated: 2025/12/03 19:37:35 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Creates a string from 2 other strings, then frees the 'head'.
 * @param head	the first string
 * @param tail	the second string
 * @return		a pointer to the joined string
 */
char	*ft_strjoin_free(char *head, const char *tail)
{
	char	*new;

	new = ft_strjoin(head, tail);
	free(head);
	return (new);
}
