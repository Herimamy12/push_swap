#include "push_swap.h"

void	rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_rotate (stack_a);
	ft_rotate (stack_b);
	ft_printf ("rr\n");
}

void	reverse_rotate_all(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate (stack_a);
	ft_reverse_rotate (stack_b);
	ft_printf ("rrr\n");
}

void	ft_solve_cas(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize (stack_a[0]) == 3)
	{
		ft_solve_three (stack_a);
		return ;
	}
	else if (ft_lstsize (stack_a[0]) > 3)
	{
		push_b (stack_a, stack_b);
		ft_solve_cas (stack_a, stack_b);
		push_a (stack_b, stack_a);
	}
	while (!(is_sort (stack_a[0])))
		rotate_a (stack_a);
	return ;
}