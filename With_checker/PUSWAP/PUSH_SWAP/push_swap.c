/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:30:39 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/05 10:30:45 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_list *stack)
{
	if (ft_lstsize (stack) == 0)
		return (0);
	while (stack->next != NULL)
	{
		if ((long)(stack->next)->content > (long)stack->content)
			stack = stack->next;
		else
			return (0);
	}
	return (42);
}

int	is_reverse_sort(t_list *stack)
{
	while (stack->next != NULL)
	{
		if ((long)(stack->next)->content < (long)stack->content)
			stack = stack->next;
		else
			return (0);
	}
	return (42);
}

void	ft_solve_three(t_list **stack_a)
{
	int	min;
	int	max;

	min = min_value (stack_a[0]);
	max = max_value (stack_a[0]);
	if (is_sort (stack_a[0]))
		return ;
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

void	ft_solve_cas(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize (stack_a[0]) > 3)
		push_b (stack_a, stack_b);
	while (ft_lstsize (stack_a[0]) > 3)
	{
		solve_send_element (stack_a, stack_b);
		push_b (stack_a, stack_b);
	}
	ft_solve_three (stack_a);
	while (ft_lstsize (stack_b[0]) > 0)
	{
		solve_return_element (stack_a, stack_b);
		push_a (stack_b, stack_a);
	}
	ft_last_solve (stack_a);
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a[0])
		return ;
	if (is_sort (stack_a[0]))
		return ;
	if (ft_lstsize (stack_a[0]) == 2)
	{
		swap_a (stack_a);
		return ;
	}
	else
	{
		ft_solve_cas (stack_a, stack_b);
		return ;
	}
}
