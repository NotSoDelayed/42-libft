/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:07:35 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/06 21:38:55 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlinkedlist.h"
#include <stddef.h>

/**
 * Frees an entire linked list, including the content of each node.
 * @param list	the linked list
 * @param del	the function to free the node's content (else NULL)
 */
void	ft_dlstclear(t_dlist **list, void (*del)(void *))
{
	t_dlist	*node;
	t_dlist	*next;

	node = *list;
	while (node)
	{
		next = node->next;
		ft_dlstdelone(node, del);
		node = next;
	}
	*list = NULL;
}
