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
t_list	*ft_changeadress(t_list *lst);

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
	t_list	**tmp;
	va_list	args;

	i = 0;
	lst = NULL;
	tmp = NULL;
	va_start (args, nb);
	while (i < nb)
	{
		t = (va_arg (args, int));
		tmp[i] = (t_list *)malloc(sizeof (t_list));
		if (!tmp[i])
			return (NULL);
		if (i == 0)
		{
			ft_printf ("makato\n");
			lst = ft_lstnew (&t);
			ft_printf ("LISTE prim = ");
			ft_lstprintf (lst);
			ft_printf ("\n");
		}
		else
		{
			ft_printf ("makary e\n");
			tmp[i] = ft_lstnew (&t);
			ft_printf ("LISTE tmp = ");
			ft_lstprintf (tmp[i]);
			ft_printf ("\n");
		}
		if (tmp[i])
			ft_lstadd_back (&lst, tmp[i]);
		ft_printf ("LISTE = ");
		ft_lstprintf (lst);
		ft_printf ("\n");
		i++;
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

t_list	*ft_changeadress(t_list *lst)
{
	t_list	*new_adress;

	new_adress = (t_list *)malloc(sizeof (t_list));
	if (!new_adress)
		return (NULL);
	lst = new_adress;
	return (lst);
}
