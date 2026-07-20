/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:36:28 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/06 21:44:48 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlinkedlist.h"
#include <stdlib.h>

/**
 * Creates a new node with the specified content.
 * @param content	the content (else NULL)
 * @return			a pointer to the created node
 */
t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*node;

	node = malloc(sizeof(t_dlist));
	if (!node)
		return (NULL);
	node->prev = NULL;
	node->content = content;
	node->next = NULL;
	return (node);
}
