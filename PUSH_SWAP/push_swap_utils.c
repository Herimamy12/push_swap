/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:30:40 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/07 11:30:42 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmps;
	t_list	*tmp2;

	if (!lst[0])
		return ;
	if (ft_lstsize (lst[0]) == 1)
		return ;
	tmp = ft_lstfirst (lst[0]);
	tmps = (lst[0])->next;
	free (lst[0]);
	lst[0] = tmps;
	tmp2 = ft_lstfirst (lst[0]);
	tmps = (lst[0])->next;
	free (lst[0]);
	lst[0] = tmps;
	tmp->next = lst[0];
	tmp2->next = tmp;
	lst[0] = tmp2;
}

void	ft_push(t_list **pile_src, t_list **pile_dest)
{
	if (!pile_src[0])
		return ;
	if (!pile_dest[0])
	{
		pile_dest[0] = ft_lstnew ((pile_src[0])->content);
		pile_src[0] = ft_delfirst (pile_src[0]);
	}
	else
	{
		ft_lstadd_front (pile_dest, ft_lstnew ((pile_src[0])->content));
		pile_src[0] = ft_delfirst (pile_src[0]);
	}
}

void	ft_rotate(t_list **lst)
{
	t_list	*tmp;

	if (!lst[0])
		return ;
	if (ft_lstsize (lst[0]) == 1)
		return ;
	tmp = ft_lstfirst (lst[0]);
	lst[0] = ft_delfirst (lst[0]);
	ft_lstadd_back (&lst[0], tmp);
}

void	ft_reverse_rotate(t_list **lst)
{
	t_list	*tmp;

	if (!lst[0])
		return ;
	if (ft_lstsize (lst[0]) == 1)
		return ;
	tmp = ft_lstlast (lst[0]);
	tmp = ft_lstnew (tmp->content);
	lst[0] = ft_dellast (lst[0]);
	tmp->next = lst[0];
	lst[0] = tmp;
}
