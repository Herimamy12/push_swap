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

int	*first_step_tab(char *argv)
{
	int		i;
	int		nb_word;
	int		*tab;
	char	**av;

	av = ft_split (argv, ' ');
	nb_word = ft_count_word (argv, ' ');
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
	int		*t;
	t_list	*tmp;
	t_list	*stack_a;

	i = 0;
	tmp = NULL;
	while (i < nb_word)
	{
		t = (int *)malloc(sizeof (int));
		if (!t)
			return (NULL);
		*t = tab[i];
		if (i == 0)
			stack_a = ft_lstnew (t);
		else
			tmp = ft_lstnew (t);
		ft_lstadd_back (&stack_a, tmp);
		i++;
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
		tab = first_step_tab (argv[1]);
		nb_word = ft_count_word (argv[1], ' ');
		stack_a = first_create (nb_word, tab);
	}
	return (stack_a);
}
