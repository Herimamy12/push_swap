/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_tnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:24:23 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/06 14:24:24 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*lstret;

	lstret = NULL;
	while (lst)
	{
		tmp = ft_lstnew ((*f)(lst->content));
		if (tmp == NULL)
			ft_lstclear (&lstret, (*del));
		ft_lstadd_back (&lstret, tmp);
		lst = lst->next;
	}
	return (lstret);
}

t_list	*ft_lstcreate(int nb, ...)
{
	int		i;
	int		*t;
	t_list	*lst;
	t_list	*tmp;
	va_list	args;

	i = 0;
	lst = NULL;
	tmp = NULL;
	va_start (args, nb);
	while (i++ < nb)
	{
		t = (int *)malloc(sizeof (int));
		if (!t)
			return (NULL);
		*t = (va_arg (args, int));
		if (i == 0)
			lst = ft_lstnew (t);
		else
			tmp = ft_lstnew (t);
		ft_lstadd_back (&lst, tmp);
	}
	va_end (args);
	return (lst);
}

t_list	*ft_lstfirst(t_list *lst)
{
	t_list	*first;

	if (!lst)
		return (NULL);
	first = ft_lstnew (lst->content);
	return (first);
}

t_list	*ft_dellast(t_list *lst)
{
	t_list	*tmp;
	t_list	*list;

	if (!lst)
		return (NULL);
	list = NULL;
	while (lst->next != NULL)
	{
		tmp = ft_lstnew (lst->content);
		ft_lstadd_back (&list, tmp);
		lst = lst->next;
	}
	return (list);
}
