/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:05:35 by sming-zh          #+#    #+#             */
/*   Updated: 2025/11/29 16:37:10 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_H
# define LINKEDLIST_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_at(t_list **list, t_list *node, int index);
void	ft_lstadd_back(t_list **list, t_list *node);
void	ft_lstadd_front(t_list **list, t_list *node);
void	ft_lstclear(t_list **list, void (*del)(void *));
int		ft_lstdel_at(t_list **list, size_t index, void (*del)(void *));
void	ft_lstdelone(t_list *node, void (*del)(void *));
void	ft_lstiter(t_list *list, void (*f)(void *));
t_list	*ft_lstlast(t_list *list);
t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstnode_at(t_list *list, int index);
int		ft_lstsize(t_list *list);

#endif
