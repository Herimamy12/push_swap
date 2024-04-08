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

/*void	first_check (char *argv)
{
	int	nb_word;

	nb_word = ft_count_word (argv);
}

void	check_error(int argc, char **argv)
{
	if (argc == 2)
		first_check (argv[1]);
	else
		chek_argBDB
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	else
		check_error (argc, argv);
	return 0;
}*/

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

int	main(void)
{
	int	nb;

	nb = ft_count_word ("test et test", ' ');
	ft_printf ("%d\n", nb);
	return (0);
}
