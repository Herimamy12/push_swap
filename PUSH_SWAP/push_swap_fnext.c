/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_fnext.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:51:45 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/06 16:51:49 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*second_step_tab(int nb_word, char **argv)
{
	int	i;
	int	*tab;

	i = 1;
	tab = (int *)malloc(sizeof (int) * nb_word);
	if (!tab)
		return (NULL);
	while (i <= nb_word)
	{
		tab[i - 1] = ft_atol (argv[i]);
		i++;
	}
	return (tab);
}

int	*first_step_tab(int nb_word, char *argv)
{
	int		i;
	int		*tab;
	char	**av;

	av = ft_split (argv, ' ');
	i = 0;
	tab = (int *)malloc(sizeof (int) * nb_word);
	if (!tab)
		return (NULL);
	while (i < nb_word)
	{
		tab[i] = ft_atol (av[i]);
		i++;
	}
	free_double_char (av);
	return (tab);
}

t_list	*first_create(int nb_word, int *tab)
{
	int		i;
	t_list	*tmp;
	t_list	*stack_a;

	i = 0;
	tmp = NULL;
	while (i < nb_word)
	{
		if (i == 0)
			stack_a = ft_lstnew (tab);
		else
			tmp = ft_lstnew (tab);
		ft_lstadd_back (&stack_a, tmp);
		i++;
		tab++;
	}
	return (stack_a);
}

t_list	*create_stack(int argc, char **argv)
{
	int		nb_word;
	int		*tab;
	t_list	*stack_a;

	if (argc == 2)
	{
		nb_word = ft_count_word (argv[1], ' ');
		tab = first_step_tab (nb_word, argv[1]);
	}
	else
	{
		nb_word = argc - 1;
		tab = second_step_tab (nb_word, argv);
	}
	stack_a = first_create (nb_word, tab);
	return (stack_a);
}

void	ft_free_lst(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		free (lst);
		lst = tmp;
	}
	free (lst);
}
