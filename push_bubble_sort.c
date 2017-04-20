/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bubble_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 15:51:50 by tbui              #+#    #+#             */
/*   Updated: 2016/07/22 15:51:52 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			take_sort(int amt_a, int *list_a)
{
	int i;

	i = 0;
	while (good_pos(list_a[i], list_a, amt_a, i) == 1 || \
		list_a[i] == get_smallest(list_a, amt_a) || \
		list_a[i] == get_biggest(list_a, amt_a))
		i++;
	return (list_a[i]);
}

int			find_position(int amt_a, int *list_a)
{
	int to_sort;
	int i;
	int cmp_bef;
	int cmp_af;

	cmp_af = 2;
	cmp_bef = 1;
	i = 0;
	to_sort = list_a[0];
	while (cmp_af < amt_a)
	{
		if (list_a[cmp_bef] < to_sort && list_a[cmp_af] > to_sort)
			break ;
		cmp_bef++;
		cmp_af++;
		i++;
	}
	return (i);
}

int			*push_nd_rotate(int amt_a, int *list_a, int amt_b, int *list_b)
{
	int cmp_bef;
	int cmp_af;
	int moves;

	moves = 0;
	ft_push_list(list_a, &amt_a, list_b, &amt_b);
	ft_putstr("pb\n");
	cmp_bef = 0;
	cmp_af = 1;
	while (amt_b == 1 && cmp_af < amt_a)
	{
		if (list_a[cmp_bef] < list_b[0] && list_a[cmp_af] > list_b[0])
		{
			list_a = turn_to_trn_a(list_a, amt_a, &moves, list_a[cmp_af]);
			ft_push_list(list_b, &amt_b, list_a, &amt_a);
			ft_putstr("pa\n");
			break ;
		}
		cmp_bef++;
		cmp_af++;
	}
	return (list_a);
}

int			*bubble_sort(int *list_a, int *list_b, int amt_a)
{
	int moves;
	int to_sort;
	int push_or_swap;
	int amt_b;

	amt_b = 0;
	moves = 0;
	while (decal_in_order(amt_a, list_a) == 0)
	{
	//	ts_print(amt_a, list_a);
		to_sort = take_sort(amt_a, list_a);
	//	printf("(%d)\n", to_sort);
		if (amt_a > 3)
			list_a = turn_to_trn_a(list_a, amt_a, &moves, to_sort);
		push_or_swap = find_position(amt_a, list_a);
	//	printf("(%d)\n", push_or_swap);
		if (push_or_swap >= 2)
			list_a = push_nd_rotate(amt_a, list_a, amt_b, list_b);
	//	else if (push_or_swap == amt_a - 3)
	//		list_a = sort_bubble_rev(amt_a, list_a);
		else
			list_a = sort_bubble(amt_a, list_a);
	//	ts_print(amt_a, list_a);
	}
	list_a = turn_to_trn_a(list_a, amt_a, &moves, get_smallest(list_a, amt_a));

//	ts_print(amt_a, list_a);

	return (list_a);
}
