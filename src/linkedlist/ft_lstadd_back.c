/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 15:34:37 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:19 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

/**
 * Adds a node to the end of a linked list.
 * @param list	the linked list
 * @param node	the node to add
 */
void	ft_lstadd_back(t_list **list, t_list *node)
{
	t_list	*parent;

	if (!*list)
		*list = node;
	else
	{
		parent = ft_lstlast(*list);
		parent->next = node;
	}
}
