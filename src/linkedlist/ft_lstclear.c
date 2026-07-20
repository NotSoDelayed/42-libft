/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:11:32 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/05 16:16:01 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

/**
 * Frees an entire linked list, including the content of each node.
 * @param list	the linked list
 * @param del	the function to free the node's content (else NULL)
 */
void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	node = *list;
	while (node)
	{
		next = node->next;
		ft_lstdelone(node, del);
		node = next;
	}
	*list = NULL;
}
