/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:43:34 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/06 22:39:15 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlinkedlist.h"
#include <stddef.h>

/**
 * @param list	the linked list
 * @return		the amount of nodes
 */
int	ft_dlstsize(t_dlist *list)
{
	int		count;

	if (list == NULL)
		return (0);
	count = 1;
	while (list->next)
	{
		list = list->next;
		count++;
	}
	return (count);
}
