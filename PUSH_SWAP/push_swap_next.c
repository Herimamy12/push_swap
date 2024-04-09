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
	int		j;
	int		len;
	int		nb_word;
	char	**av;

	i = 0;
	nb_word = ft_count_word (argv, ' ');
	av = ft_split (argv, ' ');
	while (i < nb_word)
	{
		j = 0;
		len = ft_strlen (av[i]);
		while (j < len)
		{
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

