/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:49:50 by sming-zh          #+#    #+#             */
/*   Updated: 2025/11/29 15:25:29 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

/**
 * Deletes a node at the given position in a linked list.
 * @param list	the linked list
 * @param index	the position to insert
 * @param del	the function to free the node's content (else NULL)
 * @return	whether node at 'index' exists
 */
int	ft_lstdel_at(t_list **list, size_t index, void (*del)(void *))
{
	t_list	*prev;
	t_list	*subject;

	if (index == 0)
	{
		if (!(*list)->next)
		{
			ft_lstclear(list, del);
			return (1);
		}
		subject = *list;
		*list = subject->next;
	}
	else
	{
		prev = ft_lstnode_at(*list, index - 1);
		subject = prev->next;
		if (!subject)
			return (0);
		prev->next = subject->next;
	}
	ft_lstdelone(subject, del);
	return (1);
}
