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

	ft_printf ("first_value = %d\n", value);
	targets = find_send_targets (value, stack);
	ft_printf ("targets = %d\n", targets);
	pos_targets = find_position (targets, stack);
	ft_printf ("pos_targets = %d\n", pos_targets);
	mdn_position = find_position (median_value (stack), stack);
	ft_printf ("mdn_pos_3 = %d\n", mdn_position);
	if (pos_targets <= mdn_position)
	{
		ft_printf ("OK1\n");
		return (pos_targets);
	}
	else
	{
		ft_printf ("OK2\n");
		return (pos_targets - (pos_targets - mdn_position));
	}
}

int	count_easy_mouv(t_list **stack_a, t_list **stack_b, int pos_easy)
{
	int	i;
	int	tmp;
	int	mouv_b;
	int	mdn_position;
	int	count_stack_a_mouv;

	i = 0;
	pos_easy = count_stack_b_mouv (first_value (stack_a[0]), stack_b[0]);
	ft_printf ("pos_eas = %d\n", pos_easy);
	mdn_position = find_position (median_value (stack_a[0]), stack_a[0]);
	ft_printf ("mdn_pos_2 = %d\n", mdn_position);
	while (stack_a[0])
	{
		if (i <= mdn_position)
			count_stack_a_mouv = i;
		else
			count_stack_a_mouv = (i - (i - mdn_position));
		ft_printf ("c_stak_a = %d\n", count_stack_a_mouv);
		mouv_b = count_stack_b_mouv (first_value (stack_a[0]), stack_b[0]);
		tmp = mouv_b + count_stack_a_mouv;
		ft_printf ("tmp = %d #### pos_eas = %d\n", tmp, pos_easy);
		if (tmp < pos_easy)
			pos_easy = tmp;
		i++;
		stack_a[0] = stack_a[0]->next;
	}
	ft_printf ("pos_eas_ret = %d\n", pos_easy);
	return (pos_easy);
}

void	solve_send_element(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	targets;
	int	first_a;
	int	mdn_position;
	int	stack_pos_easy;

	i = 0;
	stack_pos_easy = 0;
	mdn_position = find_position (median_value (stack_a[0]), stack_a[0]);
	ft_printf ("mdn_pos = %d\n", mdn_position);
	stack_pos_easy = count_easy_mouv (stack_a, stack_b, stack_pos_easy);
	ft_printf ("mtk_pos_eas = %d\n", stack_pos_easy);
	while (i < stack_pos_easy)
	{
		ft_printf ("i = %d ### stak_poz_ez = %d\n", i, stack_pos_easy);
		if (stack_pos_easy <= mdn_position)
			rotate_a (stack_a);
		else
			reverse_rotate_a (stack_a);
		i++;
	}
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
