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
#include <limits.h>

/*##############################################*/
/*												*/
/*												*/
/*				MAIN_TEST_ALGO					*/
/*												*/
/*												*/
/*##############################################*/

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (error_handling (argc, argv))
		return (0);
	stack_a = create_stack (argc, argv);
	stack_b = NULL;
	push_swap (&stack_a, &stack_b);
	ft_printf ("%l\n", stack_a);
	ft_free_lst (stack_a);
	ft_free_lst (stack_b);
	return (0);
}

/*##############################################*/
/*												*/
/*												*/
/*			   MAIN_TEST_MOUV_MIX				*/
/*												*/
/*												*/
/*##############################################*/

// Test pour 6 valeurs

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;

// 	if (error_handling (argc, argv))
// 		return (0);
// 	stack_a = create_stack (argc, argv);
// 	stack_b = NULL;
// 	push_swap (&stack_a, &stack_b);
// 	ft_reverse_rotate (&stack_a); ft_push (&stack_a, &stack_b);
// 	ft_reverse_rotate (&stack_a); ft_push (&stack_b, &stack_a);
// 	ft_rotate (&stack_a);ft_rotate (&stack_a);
// 	ft_printf ("%l\n", stack_a);
// 	ft_free_lst (stack_a);
// 	ft_free_lst (stack_b);
// 	return (0);
// }

/*##############################################*/
/*												*/
/*												*/
/*			MAIN_TEST_CREATE_STACK				*/
/*												*/
/*												*/
/*##############################################*/

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;

// 	if (error_handling (argc, argv))
// 		return (0);
// 	stack_a = create_stack (argc, argv);
// 	stack_b = NULL;
// 	ft_printf ("stack_a = %l\n", stack_a);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		ft_push (&stack_a, &stack_b);
// 		ft_printf ("stack_a = %l\nstack_b = %l\n\n", stack_a, stack_b);
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		ft_swap (&stack_a);
// 		ft_printf (" sa stack_a = %l\n", stack_a);
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		ft_rotate (&stack_a);
// 		ft_printf (" ra stack_a = %l\n", stack_a);
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		ft_reverse_rotate (&stack_a);
// 		ft_printf (" rra stack_a = %l\n", stack_a);
// 	}
// 	ft_free_lst (stack_a);
// 	ft_free_lst (stack_b);
// 	return (0);
// }

/*##############################################*/
/*												*/
/*												*/
/*				  MAIN_TEST_PILE				*/
/*												*/
/*												*/
/*##############################################*/

// int	main(void)
// {
// 	t_list	*pile_b;

// 	pile_b = ft_lstcreate (6, -4, 7, 5, 1, 4, 2);
// 	ft_printf ("%l\n\n", pile_b);
// 	ft_reverse_rotate (&pile_b);
// 	ft_printf ("%l\n\n", pile_b);
// 	ft_swap (&pile_b);
// 	ft_printf ("%l\n\n", pile_b);
// 	return (0);
// }

/*##############################################*/
/*												*/
/*												*/
/*				MAIN_TEST_FUNCTION				*/
/*												*/
/*												*/
/*##############################################*/

// int	main(void)
// {
// 	int		i;
// 	char	*nb;
// 	char	**str;

// 	i = 0;
// 	nb = (char *)malloc(sizeof (char) * 19);
// 	if (!nb)
// 		return (0);
// 	nb = "  baby dou belou  ";
// 	str = ft_split (nb, ' ');
// 	while (i < 4)
// 		ft_printf ("%s\n", str[i++]);
// 	return (0);
// }
