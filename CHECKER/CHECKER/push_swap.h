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
void	free_double_char(char **av);
void	ft_free_lst(t_list *lst);
t_list	*create_stack(int argc, char **argv);
t_list	*first_step_create(int nb_word, char *argv);
t_list	*second_step_create(int nb_word, char **argv);
int		is_sort(t_list *stack_a);
void	swap_a(t_list **stack_a);
void	push_b(t_list **stack_a, t_list **stack_b);
void	rotate_a(t_list **stack_a);
void	reverse_rotate_a(t_list **stack_a);
void	swap_b(t_list **stack_b);
void	push_a(t_list **stack_b, t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	reverse_rotate_b(t_list **stack_b);
void	swap_all(t_list **stack_a, t_list **stack_b);
void	rotate_all(t_list **stack_a, t_list **stack_b);
void	reverse_rotate_all(t_list **stack_a, t_list **stack_b);
int		find_targets(int first_v, t_list *stack_a);
int		find_position(int value, t_list *lst);
int		check_move_rotate(t_list *stack_a, int targets);
void	ft_last_solve(t_list **stack_a);

#endif
