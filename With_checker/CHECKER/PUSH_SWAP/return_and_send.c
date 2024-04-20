/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_and_send.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:00:19 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/19 10:00:22 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	find_value_in_pos(int pos, t_list *stack)
{
	int	i;

	i = 0;
	while (i++ < pos)
		stack = stack->next;
	return (stack->content);
}

int	check_rr_mouv(int value_a, t_list **stack_a, t_list **stack_b, int pos)
{
	int	i;
	int	targets;

	i = 0;
	targets = find_send_targets (value_a, stack_b[0]);
	if (check_move_rotate (stack_b[0], targets))
	{
		while (i < pos && targets != first_value (stack_b[0]))
		{
			rotate_all (stack_a, stack_b);
			i++;
		}
	}
	else
		return (0);
	return (i);
}

int	check_rrr_mouv(int value, t_list **stack_a, t_list **stack_b, int pos)
{
	int	i;
	int	targets;

	i = 0;
	targets = find_send_targets (value, stack_b[0]);
	if (check_move_rotate (stack_b[0], targets))
		return (0);
	else
	{
		while (i < pos && targets != first_value (stack_b[0]))
		{
			reverse_rotate_all (stack_a, stack_b);
			i++;
		}
	}
	return (i);
}
