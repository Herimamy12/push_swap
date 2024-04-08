/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:39:23 by nherimam          #+#    #+#             */
/*   Updated: 2024/03/24 16:39:25 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		valr;
	va_list	args;

	i = 0;
	valr = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr ("cspdliuxX%", str[i + 1]))
		{
			valr += ft_check (str[i + 1], args);
			i++;
		}
		else
			valr += ft_putchar (str[i]);
		i++;
	}
	va_end (args);
	return (valr);
}

int	ft_strchr(char *csp, char set)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (csp[i] == set)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar (va_arg (args, int)));
	if (c == 's')
		return (ft_putstr (va_arg (args, char *)));
	if (c == 'p')
		return (ft_putaddress (va_arg (args, unsigned long)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr (va_arg (args, int)));
	if (c == 'l')
		return (ft_putlist (va_arg (args, t_list *)));
	if (c == 'u')
		return (ft_putunsigned(va_arg (args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_puthexa (va_arg (args, unsigned int), c));
	if (c == '%')
		return (ft_putchar ('%'));
	return (0);
}

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;
	int	valr;

	i = 0;
	valr = 0;
	if (!str)
		return (ft_putstr ("(null)"));
	while (str[i])
	{
		valr += ft_putchar (str[i]);
		i++;
	}
	return (valr);
}
