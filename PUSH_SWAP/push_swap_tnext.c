/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tnext.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:48:47 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/06 16:48:48 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	simplify_first_check_error(char **av, int nb_word)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < nb_word)
	{
		j = 0;
		len = ft_strlen (av[i]);
		while (j < len)
		{
			if (av[i][j] == '-' || av[i][j] == '+')
				j++;
			if (!ft_isdigit (av[i][j++]))
				return (42);
		}
		i++;
	}
	return (0);
}

int	error_handling(int argc, char **argv)
{
	if (argc == 1)
		return (42);
	if (argc == 2)
	{
		if (first_check_error (argv[1]))
			return (42);
		else if (second_check_error (argv[1]))
			return (42);
	}
	else
		if (third_check_error (argc, argv))
			return (42);
	return (0);
}

void	free_double_char(char **av)
{
	int	i;

	i = 0;
	while (av[i] != NULL)
	{
		free (av[i]);
		i++;
	}
	free (av);
}
