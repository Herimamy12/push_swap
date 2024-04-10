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
/*
t_list	*create_stack(int argc, char **argv)
{
	t_list	*stack_a;

	if (argc == 2)
}*/

/*##############################################*/
/*												*/
/*												*/
/*				MAIN_TEST_FUNCTION				*/
/*												*/
/*												*/
/*##############################################*/

int	main(int argc, char **argv)
{/*
	t_list	*stack_a;
	t_list	*stack_b;*/

	if (error_handling (argc, argv))
		return (0);
//	stack_a = create_stack (argc, argv);
	ft_printf ("Afaka tao e");
	return (0);
}

/*##############################################*/
/*												*/
/*												*/
/*				  MAIN_TEST_PILE				*/
/*												*/
/*												*/
/*##############################################*/

/*int	main(void)
{
	t_list	*pile_b;

	pile_b = ft_lstcreate (6, -4, 7, 5, 1, 4, 2);
	ft_printf ("%l\n\n", pile_b);
	ft_reverse_rotate (&pile_b);
	ft_printf ("%l\n\n", pile_b);
	ft_swap (&pile_b);
	ft_printf ("%l\n\n", pile_b);
	return (0);
}
*/

/*##############################################*/
/*												*/
/*												*/
/*				MAIN_TEST_FUNCTION				*/
/*												*/
/*												*/
/*##############################################*/

/*int	main(void)
{
	int		i;
	char	*nb;
	char	**str;

	i = 0;
	nb = (char *)malloc(sizeof (char) * 19);
	if (!nb)
		return (0);
	nb = "  baby dou belou  ";
	str = ft_split (nb, ' ');
	while (i < 4)
		ft_printf ("%s\n", str[i++]);
	return (0);
}
*/