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

int	count_stack_b_mouv(int value, t_list *stack)
{
	int	targets;
	int	pos_targets;
	int	mdn_position;

	targets = find_send_targets (value, stack);
	pos_targets = find_position (targets, stack);
	mdn_position = find_position (median_value (stack), stack);
	if (pos_targets <= mdn_position)
		return (pos_targets);
	else
		return (find_position(last_value(stack), stack) - pos_targets + 1);
}

int	count_easy_mouv(t_list *stack_a, t_list *stack_b, int pos_easy)
{
	int	i;
	int	tmp;
	int	mouv_b;
	int	mouv_a;

	i = 0;
	pos_easy = 0;
	tmp = count_stack_b_mouv (first_value (stack_a), stack_b);
	while (stack_a)
	{
		if (i <= find_position (median_value (stack_a), stack_a))
			mouv_a = i;
		else
			mouv_a = (find_position(last_value(stack_a), stack_a) + 1);
		mouv_b = count_stack_b_mouv (first_value (stack_a), stack_b);
		if (tmp > (mouv_b + mouv_a))
		{
			pos_easy = i;
			tmp = mouv_b + mouv_a;
		}
		i++;
		stack_a = stack_a->next;
	}
	return (pos_easy);
}

int	find_value_in_pos()

void	check_the_easy_mouv(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	stk_pos;
	int	pos_lastv;

	i = 0;
	stk_pos = 0;
	stk_pos = count_easy_mouv (stack_a[0], stack_b[0], stk_pos);
	if (stk_pos <= find_position (median_value (stack_a[0]), stack_a[0]))
	{
// ato izy no asina condition amle aodinana anle B fa mila jerena kely fotsiny le value anle A sy targets any @ B
		while (i++ < stk_pos)
			rotate_a (stack_a);
	}
	else
	{
// de ato n 2e etape otrzay iany
		pos_lastv = find_position(last_value(stack_a[0]), stack_a[0]);
		while (i++ < (pos_lastv + 1) - stk_pos)
			reverse_rotate_a (stack_a);
	}
}

void	solve_send_element(t_list **stack_a, t_list **stack_b)
{
	int	targets;
	int	first_a;

	if (ft_lstsize (stack_b[0]) >= 2)
		check_the_easy_mouv (stack_a, stack_b);
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
