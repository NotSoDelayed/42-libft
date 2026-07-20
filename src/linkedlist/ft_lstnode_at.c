/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnode_at.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:06:30 by sming-zh          #+#    #+#             */
/*   Updated: 2025/11/29 14:13:12 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

/**
 * @param list	the linked list
 * @param index the position of the node from the list
 * @return		the node at the given index
 */
t_list	*ft_lstnode_at(t_list *list, int index)
{
	int	at;

	at = 0;
	while (at < index && list)
	{
		list = list->next;
		at++;
	}
	return (list);
}
