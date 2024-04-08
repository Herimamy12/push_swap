/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_next.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 08:54:28 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/08 08:54:31 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlist(t_list *lst)
{
	int	value;
	int	*t;

	value = 0;
	if (!lst || lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		t = lst->content;
		value += ft_putnbr (*t);
		ft_putchar (' ');
		lst = lst->next;
	}
	t = lst->content;
	value += ft_putnbr (*t);
	return (value);
}
