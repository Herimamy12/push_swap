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

t_list	*second_step_create(int nb_word, char **argv)
{
	int		i;
	int		tmp;
	t_list	*stack_a;

	i = 1;
	while (i <= nb_word)
	{
		tmp = ft_atol (argv[i]);
		if (i == 1)
			stack_a = ft_lstnew (tmp);
		else
			ft_lstadd_back (&stack_a, ft_lstnew (tmp));
		i++;
	}
	return (stack_a);
}

t_list	*first_step_create(int nb_word, char *argv)
{
	int		i;
	int		tmpi;
	char	**av;
	t_list	*stack_a;

	av = ft_split (argv, ' ');
	i = 0;
	while (i < nb_word)
	{
		tmpi = ft_atol (av[i]);
		if (i == 0)
			stack_a = ft_lstnew (tmpi);
		else
			ft_lstadd_back (&stack_a, ft_lstnew (tmpi));
		i++;
	}
	free_double_char (av);
	return (stack_a);
}

t_list	*create_stack(int argc, char **argv)
{
	int		nb_word;
	t_list	*stack_a;

	if (argc == 2)
	{
		nb_word = ft_count_word (argv[1], ' ');
		if (nb_word == 0)
			return (NULL);
		stack_a = first_step_create (nb_word, argv[1]);
	}
	else
	{
		nb_word = argc - 1;
		stack_a = second_step_create (nb_word, argv);
	}
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
