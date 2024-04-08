/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_next.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:36:16 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/08 13:36:19 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int		count;
	char	*tmp;

	if (!s)
		return (0);
	count = 0;
	tmp = (char *)s;
	while (*tmp)
	{
		while (*tmp == c)
			tmp++;
		if (*tmp != c)
			count++;
		while (*tmp != c)
			tmp++;
	}
	return (count);
}
