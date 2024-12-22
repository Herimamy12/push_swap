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

int	cmd_stack_a(char *cmd, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp (cmd, "sa\n"))
	{
		swap_a (stack_a);
		return (42);
	}
	if (ft_strcmp (cmd, "ra\n"))
	{
		rotate_a (stack_a);
		return (42);
	}
	if (ft_strcmp (cmd, "rra\n"))
	{
		reverse_rotate_a (stack_a);
		return (42);
	}
	if (ft_strcmp (cmd, "pa\n"))
	{
		push_a (stack_b, stack_a);
		return (42);
	}
	return (0);
}

int	cmd_stack_b(char *cmd, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp (cmd, "sb\n"))
	{
		swap_b (stack_b);
		return (42);
	}
	if (ft_strcmp (cmd, "rb\n"))
	{
		rotate_b (stack_b);
		return (42);
	}
	if (ft_strcmp (cmd, "rrb\n"))
	{
		reverse_rotate_b (stack_b);
		return (42);
	}
	if (ft_strcmp (cmd, "pb\n"))
	{
		push_b (stack_a, stack_b);
		return (42);
	}
	return (0);
}

int	cmd_all_mouv(char *cmd, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp (cmd, "ss\n"))
	{
		swap_all (stack_b, stack_a);
		return (42);
	}
	if (ft_strcmp (cmd, "rr\n"))
	{
		rotate_all (stack_b, stack_a);
		return (42);
	}
	if (ft_strcmp (cmd, "rrr\n"))
	{
		reverse_rotate_all (stack_b, stack_a);
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
		i = cmd_stack_a (cmd, stack_a, stack_b);
		if (i == 0)
			i = cmd_stack_b (cmd, stack_a, stack_b);
		if (i == 0)
			i = cmd_all_mouv (cmd, stack_a, stack_b);
		if (i == 0)
		{
			free (cmd);
			write (2, "Error\n", 6);
			return ;
		}
		free (cmd);
		cmd = get_next_line (STDIN_FILENO);
	}
	if (is_sort (stack_a[0]) && ft_lstsize (stack_b[0]) == 0)
		ft_printf ("OK\n");
	else
		ft_printf ("KO\n");
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
	ft_free_lst (stack_a);
	ft_free_lst (stack_b);
	return (0);
}
