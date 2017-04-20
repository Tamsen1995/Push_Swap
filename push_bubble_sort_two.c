/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bubble_sort_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:46:43 by tbui              #+#    #+#             */
/*   Updated: 2016/07/26 13:46:45 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			right_pos(int to_sort, int *list_a, int amt_a)
{
	if (to_sort < list_a[1] && to_sort > list_a[amt_a - 1])
		return (1);
	else
		return (0);
}

int			*sort_bubble(int amt_a, int *list_a)
{


	while (right_pos(list_a[0], list_a, amt_a) == 0)
	{
		list_a = ft_swap_list(amt_a, list_a);
		ft_putstr("sa\n");
		if (decal_in_order(amt_a, list_a) == 1 || right_pos(list_a[0], list_a, amt_a) == 1)
		{
			return (list_a);
		}
		list_a = ft_rev_rot(amt_a, list_a);
		ft_putstr("rra\n");
	}
	return (list_a);
}

int			*sort_bubble_rev(int amt_a, int *list_a)
{
	list_a = ft_rotate_list(amt_a, list_a);
	ft_putstr("ra\n");
	list_a = ft_swap_list(amt_a, list_a);
	ft_putstr("sa\n");
	return (list_a);
}

int			*rot_to_trn_check(int *list_a, int amt_a, int trn, int *moves)
{
	int last;
	int *check;

	check = list_a;
	last = amt_a - 1;
	while (trn != list_a[last])
	{
		check = ft_rotate_list(amt_a, check);
		(*moves)++;
	}
	return (check);
}
