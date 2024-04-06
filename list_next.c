/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:31:35 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/06 13:31:37 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst[0] != NULL)
		ft_lstlast (lst[0])->next = new;
	else
		lst[0] = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del (lst->content);
	free (lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst[0])
	{
		tmp = lst[0]->next;
		del (lst[0]->content);
		free (lst[0]);
		lst[0] = tmp;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f (lst->content);
		lst = lst->next;
	}
}
