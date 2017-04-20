/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 14:50:38 by tbui              #+#    #+#             */
/*   Updated: 2016/05/27 14:50:42 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			good_positioning(int to_sort, int *list_a, int amt_a)
{
	if (to_sort < list_a[0] && to_sort > list_a[amt_a - 1])
		return (1);
	else
		return (0);
}

int			*put_in_sorted(int *sorted, int *sorti, int to_sort)
{
	sorted[(*sorti)] = to_sort;
	(*sorti)++;
	return (sorted);
}

int			*find_right_pos(int to_sort, int *moves, int *list_a, int amt_a)
{
	int flag;

	flag = lft_or_right(list_a, amt_a, to_sort);
	while (good_positioning(to_sort, list_a, amt_a) == 0)
	{
		if (flag == 1)
		{
			list_a = ft_rotate_list(amt_a, list_a);
			ft_putstr("ra\n");
		}
		if (flag == 0)
		{
			list_a = ft_rev_rot(amt_a, list_a);
			ft_putstr("rra\n");
		}
		(*moves)++;
	}
	return (list_a);
}
