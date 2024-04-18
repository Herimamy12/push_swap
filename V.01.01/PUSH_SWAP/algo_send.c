/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_send.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:29:18 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/16 08:29:21 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_send_targets(int first_v, t_list *stack_b)
{
	int	tmp;
	int	targets;
	int	result;

	if (first_v < min_value (stack_b))
		return (max_value (stack_b));
	if (first_v > max_value (stack_b))
		return (max_value (stack_b));
	targets = stack_b->content;
	while (stack_b->next != NULL)
	{
		tmp = first_v - targets;
		result = first_v - (stack_b->next)->content;
		if (tmp < 0 || ((tmp > result) && result > 0))
			targets = (stack_b->next)->content;
		stack_b = stack_b->next;
	}
	return (targets);
}

void	solve_send_element(t_list **stack_a, t_list **stack_b)
{
	int	targets;
	int	first_a;

	first_a = first_value (stack_a[0]);
	targets = find_send_targets (first_a, stack_b[0]);
	while (targets != first_value (stack_b[0]))
	{
		if (check_move_rotate (stack_b[0], targets))
			rotate_b (stack_b);
		else
			reverse_rotate_b (stack_b);
	}
}

void	solve_return_element(t_list **stack_a, t_list **stack_b)
{
	int	targets;
	int	first_b;

	first_b = first_value (stack_b[0]);
	targets = find_targets (first_b, stack_a[0]);
	while (targets != first_value (stack_a[0]))
	{
		if (check_move_rotate (stack_a[0], targets))
			rotate_a (stack_a);
		else
			reverse_rotate_a (stack_a);
	}
}
