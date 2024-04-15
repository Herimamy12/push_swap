/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:33:04 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/15 09:33:07 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	median_value(t_list *stack)
{
	int	i;
	int	index;

	i = 0;
	index = (ft_lstsize (stack) / 2);
	while (i < index)
		stack = stack->next;
	return (stack->content);
}
