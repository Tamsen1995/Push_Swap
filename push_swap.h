/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 17:12:15 by tbui              #+#    #+#             */
/*   Updated: 2016/06/14 17:12:16 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "libft.h"

void		ft_rotate_both(int amt1, int *list1, int amt2, int *list2);
void		ft_rev_rot_both(int amt1, int *list1, int amt2, int *list2);

int			*sort_bubble_rev(int amt_a, int *list_a);
int			right_pos(int to_sort, int *list_a, int amt_a);
int			*sort_bubble(int amt_a, int *list_a);
int			*rot_to_trn_check(int *list_a, int amt_a, int trn, int *moves);
int			*copy_list(int amt_a, int *list_a);
int			decal_in_order(int amt_a, int *list_a);
int			good_pos(int to_sort, int *list_a, int amt_a, int i);
int			take_sort(int amt_a, int *list_a);
int			find_position(int amt_a, int *list_a);
int			*push_nd_rotate(int amt_a, int *list_a, int amt_b, int *list_b);
int			*bubble_sort(int *list_a, int *list_b, int amt_a);
int			no_need_to_be_sort(int to_sort, int *list_a, int amt_a);
void		ts_print(int amt, int *list_a);
int			*put_in_sorted(int *sorted, int *sorti, int to_sort);
int			good_positioning(int to_sort, int *list_a, int amt_a);
int			right_pos(int to_sort, int *list_a, int amt_a);
int			*sort_bubble(int amt_a, int *list_a);
int			*rot_to_trn_check(int *list_a, int amt_a, int trn, int *moves);
int			*copy_list(int amt_a, int *list_a);
int			take_sort(int amt_a, int *list_a);
int			find_position(int amt_a, int *list_a);
int			*push_nd_rotate(int amt_a, int *list_a, int amt_b, int *list_b);
int			*bubble_sort(int *list_a, int *list_b, int amt_a);
char		**get_input_arr(int *argc, char **argv);
int			in_reverse(int amt_a, int *list_a);
int			*inverse_table_arr_int(int argc, int *arr);
char		**inverse_table_arr(int argc, char **arr);
int			main_norm(int *list_a, int j);
void		ft_push_out(int *list_b);
void		ft_push_swap_end(int *list_a);
void		ft_push_swap(int amt_a, int *list_a);
int			piv_or_inf(int pivot, int amt_a, int *list_a);
int			what_inf(int *list, int amt, int pivot);
int			lft_or_right(int *list_a, int amt_a, int trn);
int			*push_to_a(int *list_a, int *list_b, int amt_b, int *moves);
int			inf_there(int *list, int amt, int pivot);
int			*turn_to_trn(int *listfrom, int amtfrom, int *moves, int trn);
int			*quick_sort(int *list_a, int *list_b, int amt_a, int *moves);
int			*rot_to_trn(int *list_a, int amt_a, int trn, int *moves);
int			*rev_to_trn(int *list_a, int amt_a, int trn, int *moves);
int			*rot_to_trn(int *list_a, int amt_a, int trn, int *moves);
int			*rev_to_trn(int *list_a, int amt_a, int trn, int *moves);
int			ft_validate(char *str);
int			ft_max_int(int nbr, char *str);
int			check_for_dob(int *list, int amt);
int			err_out(int *list_a);
int			get_smallest(int *listfrom, int amtfrom);
int			needs_jst_swap(int amt_a, int *list_a);
int			*swap_it(int amt_a, int *list_a, int *moves);
int			first_two_switched(int amt_a, int *list_a);
int			*bas_pile(int amt_a, int *list_a, int *moves);
int			get_biggest(int *list_a, int amt_a);
int			is_sorted(int nbr, int *sorted, int sorti);
int			get_sort(int *list_a, int amt_a, int **sorted, int *sorti);
int			*find_right_pos(int to_sort, int *moves, int *list_a, int amt_a);
int			choose_trn(int *list_a, int amt_a, int pivot);
int			*ft_rotate_list(int amt, int *list);
int			*ft_swap_list(int amt, int *list);
int			ft_push_list(int *list1, int *amt1, int *list2, int *amt2);
int			*ft_rev_rot(int amt, int *list);
void		ft_selection_sort(int *list_a, int*list_b, int amt);
void		ft_quick_sort(int *list_a, int *list_b, int amt_a, int *moves);
int			*my_sort(int *listfrom, int *listto, int amt, int *moves);
int			in_order(int amt_a, int *list_a);
int			*small_sort(int *list_a, int *list_b, int amt_a, int *moves);
int			*rev_to_trn_a(int *list_a, int amt_a, int trn, int *moves);
int			*turn_to_trn_a(int *listfrom, int amtfrom, int *moves, int trn);
int			*rot_to_trn_a(int *list_a, int amt_a, int trn, int *moves);

#endif
