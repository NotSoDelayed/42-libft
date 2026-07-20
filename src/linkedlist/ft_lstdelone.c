/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:02:49 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"
#include <stdlib.h>

/**
 * Frees the node's content via the given function and frees the node after.
 * @param node	the node
 * @param del	the function to free the node's content (else NULL)
 */
void	ft_lstdelone(t_list *node, void (*del)(void *))
{
	if (del)
		del(node->content);
	free(node);
}
