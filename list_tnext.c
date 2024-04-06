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
void	list_del(t_list **lst);

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
	int		t;
	int		i;
	t_list	*lst;
	t_list	*tmp;
	va_list	args;

	i = nb - 1;
	lst = NULL;
	tmp = NULL;
	va_start (args, nb);
	while (nb-- > 0)
	{
		t = (va_arg (args, int));
		ft_printf ("\nt = %d ** i = %d ** nb = %d\n", t, i, nb);
		if (nb == i)
		{
			ft_printf ("makato\n");
			lst = ft_lstnew (&t);
		}
		else
		{
			ft_printf ("makary e\n");
			tmp = ft_lstnew (&t);
			ft_printf ("LISTE tmp = ");
			ft_lstprintf (lst);
			ft_printf ("\n");
		}
		if (tmp)
			ft_lstadd_back (&lst, tmp);
		ft_printf ("LISTE = ");
		ft_lstprintf (lst);
		ft_printf ("\n");
//		list_del (&tmp);
	}
	va_end (args);
	return (lst);
}

/*void	list_addback(t_list **lst, t_list *new)
*/

void	list_del(t_list **lst)
{
	t_list	*tmp;

	while (lst[0])
	{
		tmp = (lst[0])->next;
		lst[0]->content = NULL;
		lst[0] = tmp;
	}
}
