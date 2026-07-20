/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlinkedlist.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyrina <dyrina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 20:07:29 by dyrina            #+#    #+#             */
/*   Updated: 2025/12/29 20:07:30 by dyrina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLINKEDLIST_H
# define DLINKEDLIST_H

typedef struct s_dlist
{
	struct s_dlist	*prev;
	void			*content;
	struct s_dlist	*next;
}	t_dlist;

void	ft_dlstadd_at(t_dlist **list, t_dlist *node, int index);
void	ft_dlstadd_back(t_dlist **list, t_dlist *node);
void	ft_dlstadd_front(t_dlist **list, t_dlist *node);
void	ft_dlstclear(t_dlist **list, void (*del)(void *));
void	ft_dlstdelone(t_dlist *node, void (*del)(void *));
t_dlist	*ft_dlstlast(t_dlist *list);
t_dlist	*ft_dlstnew(void *content);
t_dlist	*ft_dlstnode_at(t_dlist *list, int index);
int		ft_dlstsize(t_dlist *list);

#endif
