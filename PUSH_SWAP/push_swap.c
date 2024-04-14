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
	else if (ft_lstsize (stack_a[0]) == 3)
	{
		ft_solve_three (stack_a);
		return ;
	}
	else
	{
		ft_solve_cas (stack_a, stack_b);
		return ;
	}
	ft_printf ("mbola tsy vita\n");
}
