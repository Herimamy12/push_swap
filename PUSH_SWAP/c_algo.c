#include "push_swap.h"

void	swap_b(t_list **stack_b)
{
	ft_swap (stack_b);
	ft_printf ("sb\n");
}

void	push_a(t_list **stack_b, t_list **stack_a)
{
	ft_push (stack_b, stack_a);
	ft_printf ("pa\n");
}

void	rotate_b(t_list **stack_b)
{
	ft_rotate (stack_b);
	ft_printf ("rb\n");
}

void	reverse_rotate_b(t_list **stack_b)
{
	ft_reverse_rotate (stack_b);
	ft_printf ("rrb\n");
}

void	swap_all(t_list **stack_a, t_list **stack_b)
{
	ft_swap (stack_a);
	ft_swap (stack_b);
	ft_printf ("ss\n");
}