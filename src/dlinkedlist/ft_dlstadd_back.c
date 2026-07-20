/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:35:35 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlinkedlist.h"

/**
 * Adds a node to the end of a linked list.
 * @param list	the linked list
 * @param node	the node to add
 */
void	ft_dlstadd_back(t_dlist **list, t_dlist *node)
{
	t_dlist	*parent;

	if (!*list)
		*list = node;
	else
	{
		parent = ft_dlstlast(*list);
		parent->next = node;
		node->prev = parent;
	}
}
