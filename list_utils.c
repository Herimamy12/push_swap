/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 10:53:33 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/06 10:53:35 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstprintf(t_list *lst)
{
	int	*t;

	while(lst->next != NULL)
	{
		t = lst->content;
		ft_printf ("%d ", *t);
		lst = lst->next;
	}
	t = lst->content;
	ft_printf ("%d", *t);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof (t_list));
	if (!tmp)
		return ;
	tmp = *lst;
	new->next = tmp;
	*lst = new;
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
