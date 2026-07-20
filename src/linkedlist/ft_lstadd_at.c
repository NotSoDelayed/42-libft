/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:58:00 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 02:01:03 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

/**
 * Inserts a node at the given position into a linked list.
 * @param list	the linked list
 * @param node	the node to insert
 * @param index	the position to insert
 */
void	ft_lstadd_at(t_list **list, t_list *node, int index)
{
	t_list	*parent;

	if (index == 0)
		ft_lstadd_front(list, node);
	else if (index == ft_lstsize(*list))
		ft_lstadd_back(list, node);
	else
	{
		parent = ft_lstnode_at(*list, index - 1);
		node->next = parent->next;
		parent->next = node;
	}
}
