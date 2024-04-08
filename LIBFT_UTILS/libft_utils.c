/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:31:21 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/08 09:31:22 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	nb = 0;
	sign = 1;
	while ((9 <= nptr[i] && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if ('-' == nptr[i] || nptr[i] == '+')
	{
		if ('-' == nptr[i])
			sign *= -1;
		i++;
	}
	if (!('0' <= nptr[i] && nptr[i] <= '9'))
		return (0);
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		nb *= 10;
		nb += (nptr[i] - '0');
		i++;
	}
	nb *= sign;
	return (nb);
}
