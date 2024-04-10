/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_next.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:48:41 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/06 16:48:42 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	first_check_error(char *argv)
{
	int		i;
	int		nb_word;
	char	**av;
	size_t	j;

	i = 0;
	nb_word = ft_count_word (argv, ' ');
	av = ft_split (argv, ' ');
	while (i < nb_word)
	{
		j = 0;
		while (j < ft_strlen (av[i]))
		{
			if (av[i][j] == '-' || av[i][j] == '+')
				j++;
			if (!ft_isdigit (av[i][j++]))
			{
				ft_printf ("Error");
				return (42);
			}
		}
		i++;
	}
	return (0);
}

int	second_check_error(char *argv)
{
	int		i;
	int		nb_word;
	long	*tab;
	char	**av;

	i = 0;
	nb_word = ft_count_word (argv, ' ');
	tab = (long *)malloc(sizeof (long) * nb_word);
	if (!tab)
		return (42);
	av = ft_split (argv, ' ');
	while (i < nb_word)
	{
		tab[i] = ft_atol (av[i]);
		i++;
	}
	if (get_error (tab, nb_word))
		return (42);
	return (0);
}

int	get_error(long *tab, int nb_word)
{
	int	i;
	int	j;

	i = 0;
	while (i < nb_word)
	{
		j = i + 1;
		if ((tab[i] < -2147483648 || 2147483647 < tab[i]))
		{
			ft_printf ("Error");
			return (42);
		}
		while (j < nb_word)
		{
			if (tab[i] == tab[j++])
			{
				ft_printf ("Error");
				return (42);
			}
		}
		i++;
	}
	return (0);
}

int	third_check_error(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (first_check_error (argv[i]))
			return (42);
		if (second_check_error (argv[i]))
			return (42);
		i++;
	}
	if (next_get_error (argc, argv))
	{
		ft_printf ("Error");
		return (42);
	}
	return (0);
}

int	next_get_error(int argc, char **argv)
{
	int		i;
	int		j;
	long	*tab;

	i = 1;
	tab = (long *)malloc(sizeof (long) * (argc - 1));
	if (!tab)
		return (42);
	while (i < argc)
	{
		tab[i - 1] = ft_atol (argv[i]);
		i++;
	}
	i = 0;
	while (i < (argc - 1))
	{
		j = i + 1;
		while (j < (argc - 1))
			if (tab[i] == tab[j++])
				return (42);
		i++;
	}
	return (0);
}
