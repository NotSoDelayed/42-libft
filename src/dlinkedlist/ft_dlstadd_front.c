/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:26:03 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/06 21:37:21 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlinkedlist.h"
#include <stddef.h>

/**
 * Adds a node to the front of a linked list.
 * @param list	the linked list
 * @param node	the node to add
 */
void	ft_dlstadd_front(t_dlist **list, t_dlist *node)
{
	node->next = *list;
	if (*list != NULL)
		(*list)->prev = node;
	*list = node;
}
