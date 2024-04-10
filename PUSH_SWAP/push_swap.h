/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:30:22 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/05 10:30:35 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../LIBFT_UTILS/libft.h"
# include "../LIST/list.h"
# include "../PRINTF/ft_printf.h"

void	ft_swap(t_list **lst);
void	ft_push(t_list	**pile_src, t_list **pile_dest);
void	ft_rotate(t_list **lst);
void	ft_reverse_rotate(t_list **lst);
int		first_check_error(char *argv);
int		second_check_error(char *argv);
int		get_error(long *tab, int nb_word);
int		third_check_error(int argc, char **argv);
int		next_get_error(int argc, char **argv);
int		error_handling(int argc, char **argv);
int		simplify_first_check_error(char **av, int nb_word);

#endif
