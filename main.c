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

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	else
		ft_printf("%s\n", argv[0]);
	return 0;
}

/*int	main(void)
{
	t_list	*pile_b;
//	t_list	*pile_a;

//	pile_a = NULL;
	pile_b = ft_lstcreate (6, 9, 7, 5, 1, 4, 2);
//	pile_b = ft_lstcreate (1, 8, 3);
	ft_lstprintf (pile_b);
	ft_printf ("\n");
	ft_rotate (&pile_b);
	ft_lstprintf (pile_b);
	ft_printf ("\n");
	ft_reverse_rotate (&pile_b);
	ft_lstprintf (pile_b);
	ft_printf ("\n");
	return (0);
}
*/