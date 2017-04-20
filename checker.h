/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 11:04:18 by tbui              #+#    #+#             */
/*   Updated: 2016/06/21 11:04:20 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "libft.h"
# include "get_next_line.h"

void		ft_rev_rot_both(int amt1, int *list1, int amt2, int *list2);
void		ft_rotate_both(int amt1, int *list1, int amt2, int *list2);
int			err_out(int *list_a);
int			in_reverse(int amt_a, int *list_a);
int			*inverse_table_arr_int(int argc, int *arr);
char		**inverse_table_arr(int argc, char **arr);
char		**get_input_arr(int *argc, char **argv);
int			err_out(int *list_a);
int			ft_max_int(int nbr, char *str);
int			in_order(int amt_a, int *list_a);
int			ft_validate(char *str);
int			check_for_dob(int *list, int amt);
void		ts_print(int amt, int *list_a);
int			print_result(int i, int moves, int *res_a);
int			*take_instructions(int *list_a, int *list_b, int amt_a, int *moves);
int			*take_instructions_a(int *list_a, int amt_a, char *line);
int			*take_instructions_b(char *line, int *list_b, int amt_b);
int			right_input(char *line);
int			main_validation(char **arr, int *list_a, int i);
char		**get_input_arr(int *argc, char **argv);
int			main_two(int *list_a, int iw);
int			*ft_rotate_list(int amt, int *list);
int			*ft_rev_rot(int amt, int *list);
int			ft_push_list(int *list1, int *amt1, int *list2, int *amt2);
int			*ft_swap_list(int amt, int *list);

#endif
