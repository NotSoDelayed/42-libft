/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:46:24 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/06 21:40:29 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlinkedlist.h"
#include <stdlib.h>

/**
 * Frees the node's content via the given function and frees the node after.
 * @param node	the node
 * @param del	the function to free the node's content (else NULL)
 */
void	ft_dlstdelone(t_dlist *node, void (*del)(void *))
{
	if (del)
		del(node->content);
	free(node);
}
