/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_algo_next.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:33:35 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/15 09:33:38 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_rotate (stack_a);
	ft_rotate (stack_b);
	ft_printf ("rr\n");
}

void	reverse_rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate (stack_a);
	ft_reverse_rotate (stack_b);
	ft_printf ("rrr\n");
}

void	ft_reverse_sort_stack_b(t_list **stack_b)
{
//	int	cibles;

	if (is_reverse_sort (stack_b[0]))
		return ;
}

int	find_cibles(int first_v, t_list *stack_a)
{
	int	tmp;
	int	cibles;
	int	result;

	if (first_v <= min_value (stack_a))
		return (min_value (stack_a));
	if (first_v >= max_value (stack_a))
		return (min_value (stack_a));
	cibles = stack_a->content;
	while (stack_a->next != NULL)
	{
		tmp = cibles - first_v;
		result = (stack_a->next)->content - first_v;
		if (tmp < 0 || (tmp > result))
			cibles = (stack_a->next)->content;
		stack_a = stack_a->next;
	}
	return (cibles);
}

void	ft_solve_cas(t_list **stack_a, t_list **stack_b)
{
	int	cibles;
	int	first_b;

	while (ft_lstsize (stack_a[0]) > 3)
	{
		push_b (stack_a, stack_b);
		ft_reverse_sort_stack_b (stack_b);
	}
	ft_solve_three (stack_a);
	while (ft_lstsize (stack_b[0]) > 0)
	{
		first_b = first_value (stack_b[0]);
		cibles = find_cibles (first_b, stack_a[0]);
		while (cibles != first_value (stack_a[0]))
			rotate_a (stack_a);
		push_a (stack_b, stack_a);
		while (!is_sort (stack_a[0]))
			reverse_rotate_a (stack_a);
	}
}
