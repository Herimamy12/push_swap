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
