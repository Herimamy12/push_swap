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
	while (stack->next != NULL)
	{
		if ((stack->next)->content > stack->content)
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
		if ((stack->next)->content < stack->content)
			stack = stack->next;
		else
			return (0);
	}
	return (42);
}

int	first_value(t_list *stack)
{
	int	value;

	value = stack->content;
	return (value);
}

int	last_value(t_list *stack)
{
	int	value;

	while (stack->next != NULL)
		stack = stack->next;
	value = stack->content;
	return (value);
}

int	min_value(t_list *stack)
{
	int	value;

	value = stack->content;
	while (stack->next != NULL)
	{
		if (value > (stack->next)->content)
			value = (stack->next)->content;
		stack = stack->next;
	}
	return (value);
}

int	max_value(t_list *stack)
{
	int	value;

	value = stack->content;
	while (stack->next != NULL)
	{
		if ((stack->next)->content > value)
			value = (stack->next)->content;
		stack = stack->next;
	}
	return (value);
}

void	swap_a(t_list **stack_a)
{
	ft_swap (stack_a);
	ft_printf ("sa\n");
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
		return ;
	}
	else if (max == (stack_a[0])->content)
		rotate_a (stack_a);
	else if (min == (stack_a[0])->content)
	{
		rotate_a (stack_a);
		ft_solve_three (stack_a);
	}
	else if (max == last_value (stack_a[0]))
		swap_a (stack_a);
	else
		reverse_rotate_a (stack_a);
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	if (is_sort (stack_a[0]))
		return ;
	else if (stack_b[0])
		return ;
	if (ft_lstsize (stack_a[0]) == 2)
	{
		swap_a (stack_a);
		return ;
	}
	if (ft_lstsize (stack_a[0]) == 3)
	{
		ft_solve_three (stack_a);
		return ;
	}
	ft_printf ("aty\n");
}
