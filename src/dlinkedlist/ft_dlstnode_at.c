/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnode_at.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:06:30 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 02:00:10 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlinkedlist.h"

/**
 * @param list	the linked list
 * @param index the position of the node from the list
 * @return		the node at the given index
 */
t_dlist	*ft_dlstnode_at(t_dlist *list, int index)
{
	int	at;

	at = 0;
	while (at < index)
	{
		list = list->next;
		at++;
	}
	return (list);
}
