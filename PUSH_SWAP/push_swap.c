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

int	is_sort(t_list *stack_a)
{
	while (stack_a->next != NULL)
	{
		if ((stack_a->next)->content > stack_a->content)
			stack_a = stack_a->next;
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
	{
		ft_printf ("K.O.2\n");
		return ;
	}
	ft_printf ("Ok\n");
}
