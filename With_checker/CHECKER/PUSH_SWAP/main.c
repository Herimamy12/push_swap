/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:23:35 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/07 11:23:39 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cmd_stack_a(char *cmd, t_list **stack_a)
{
	if (ft_strcmp (cmd, "sa\n"))
	{
		swap_a (stack_a);
		return (42);
	}
	return (0);
}

int	cmd_stack_b(char *cmd, t_list **stack_b)
{
	if (ft_strcmp (cmd, "sb\n"))
	{
//		if (ft_lstsize (stack_b[0]) >= 2)
			swap_b (stack_b);
		return (42);
	}
	return (0);
}

void	check(t_list **stack_a, t_list **stack_b)
{
	int		i;
	char	*cmd;

	i = 42;
	cmd = get_next_line(STDIN_FILENO);
	while (cmd)
	{
		i = cmd_stack_a(cmd, stack_a);
		if (i == 0)
			i = cmd_stack_b(cmd, stack_b);
		// if (ft_strcmp (cmd, "sa\n"))
		// 	swap_a (stack_a);
		if (i == 0)
		{
			write (2, "Error\n", 6);
			return ;
		}
		cmd = get_next_line (STDIN_FILENO);
		if (stack_b[0])
			swap_b (stack_b);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1)
		return (0);
	if (error_handling (argc, argv))
	{
		write (2, "Error\n", 6);
		return (0);
	}
	stack_a = create_stack (argc, argv);
	stack_b = NULL;
	check (&stack_a, &stack_b);
	ft_printf ("%l\n", stack_a);
	ft_free_lst (stack_a);
	ft_free_lst (stack_b);
	return (0);
}
