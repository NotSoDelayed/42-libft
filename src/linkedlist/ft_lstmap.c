/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:21:23 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/05 16:36:46 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

/**
 * Creates a new linked list from the result of the given function 'f'
 * applied on the given linked list.
 * If the creation process fails, the given function 'del' will be used to
 * free the previously created nodes.
 * @param list	the linked list
 * @param f		the function to apply into each node
 * @param del	the function to free the node's content (else NULL)
 * @return		a pointer of the created linked list
 */
t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	newlist = NULL;
	while (list)
	{
		newnode = ft_lstnew(f(list->content));
		if (!newnode)
		{
			if (newlist)
				ft_lstclear(&newlist, del);
			return (NULL);
		}
		if (!newlist)
			newlist = newnode;
		else
			ft_lstadd_back(&newlist, newnode);
		list = list->next;
	}
	return (newlist);
}
