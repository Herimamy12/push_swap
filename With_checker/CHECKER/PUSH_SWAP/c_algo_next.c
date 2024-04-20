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

void	reverse_rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate (stack_a);
	ft_reverse_rotate (stack_b);
}

int	find_targets(int first_v, t_list *stack_a)
{
	int	tmp;
	int	targets;
	int	result;

	if (first_v < min_value (stack_a))
		return (min_value (stack_a));
	if (first_v > max_value (stack_a))
		return (min_value (stack_a));
	targets = stack_a->content;
	while (stack_a->next != NULL)
	{
		tmp = targets - first_v;
		result = (stack_a->next)->content - first_v;
		if (tmp < 0 || ((tmp > result) && result > 0))
			targets = (stack_a->next)->content;
		stack_a = stack_a->next;
	}
	return (targets);
}

int	find_position(int value, t_list *lst)
{
	int	position;

	position = 0;
	while ((lst->content) != value && lst)
	{
		position++;
		lst = lst->next;
	}
	return (position);
}

int	check_move_rotate(t_list *stack_a, int targets)
{
	int	targets_position;
	int	mdn_position;

	targets_position = find_position (targets, stack_a);
	mdn_position = find_position (median_value (stack_a), stack_a);
	if ((mdn_position - targets_position) >= 0)
		return (1);
	else
		return (0);
}

void	ft_last_solve(t_list **stack_a)
{
	while (!is_sort (stack_a[0]))
	{
		if (check_move_rotate (stack_a[0], min_value (stack_a[0])))
			rotate_a (stack_a);
		else
			reverse_rotate_a (stack_a);
	}
}
