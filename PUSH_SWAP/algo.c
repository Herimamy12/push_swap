/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:32:50 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/15 09:32:55 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **stack_a)
{
	ft_swap (stack_a);
	ft_printf ("sa\n");
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	ft_push (stack_a, stack_b);
	ft_printf ("pb\n");
}

void	rotate_a(t_list **stack_a)
{
	ft_rotate (stack_a);
	ft_printf ("ra\n");
}

void	reverse_rotate_a(t_list **stack_a)
{
	ft_reverse_rotate (stack_a);
	ft_printf ("rra\n");
}

void	ft_solve_three(t_list **stack_a)
{
	int	min;
	int	max;

	min = min_value (stack_a[0]);
	max = max_value (stack_a[0]);
	if (is_reverse_sort (stack_a[0]))
	{
		swap_a (stack_a);
		reverse_rotate_a (stack_a);
	}
	else if (max == (stack_a[0])->content)
		rotate_a (stack_a);
	else if (min == (stack_a[0])->content)
	{
		swap_a (stack_a);
		rotate_a (stack_a);
	}
	else if (max == last_value (stack_a[0]))
		swap_a (stack_a);
	else
		reverse_rotate_a (stack_a);
}
