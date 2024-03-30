#include "push_swap.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*init;

	init = (t_list *)malloc(sizeof(t_list));
	if (init == NULL)
		return (NULL);
	init->content = content;
	init->next = NULL;
	return (init);
}

int	main(int argc, char *argv[])
{
	t_list	*test;

	argc += 10;
	test = ft_lstnew (&(argc));
	if (test == NULL)
		return (0);
	ft_printf ("%p\n%s", (test->content), argv[0]);
	return (0);
}
