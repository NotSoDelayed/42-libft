/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_at.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:58:00 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 02:01:25 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlinkedlist.h"

/**
 * Inserts a node at the given position into a linked list.
 * @param list	the linked list
 * @param node	the node to insert
 * @param index	the position to insert
 */
void	ft_dlstadd_at(t_dlist **list, t_dlist *node, int index)
{
	t_dlist	*parent;

	if (index == 0)
		ft_dlstadd_front(list, node);
	else if (index == ft_dlstsize(*list))
		ft_dlstadd_back(list, node);
	else
	{
		parent = ft_dlstnode_at(*list, index - 1);
		node->next = parent->next;
		node->next->prev = node;
		node->prev = parent;
		parent->next = node;
	}
}
