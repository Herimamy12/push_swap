/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:32:50 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/15 09:32:55 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **stack_a)
{
	ft_swap (stack_a);
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	ft_push (stack_a, stack_b);
}

void	rotate_a(t_list **stack_a)
{
	ft_rotate (stack_a);
}

void	reverse_rotate_a(t_list **stack_a)
{
	ft_reverse_rotate (stack_a);
}

void	rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_rotate (stack_a);
	ft_rotate (stack_b);
}
