/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:09:10 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/05 16:03:07 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

/**
 * Adds a node to the front of a linked list.
 * @param list	the linked list
 * @param node	the node to add
 */
void	ft_lstadd_front(t_list **list, t_list *node)
{
	node->next = *list;
	*list = node;
}
