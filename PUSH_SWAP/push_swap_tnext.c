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
