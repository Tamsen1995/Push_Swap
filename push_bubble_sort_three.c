/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bubble_sort_three.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:46:54 by tbui              #+#    #+#             */
/*   Updated: 2016/07/26 13:46:56 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			*copy_list(int amt_a, int *list_a)
{
	int i;
	int *check;

	i = 0;
	if (!(check = (int *)malloc(sizeof(int) * amt_a)))
		return (NULL);
	while (i < amt_a)
	{
		check[i] = list_a[i];
		i++;
	}
	return (check);
}

int			decal_in_order(int amt_a, int *list_a)
{
	int moves;
	int *check;

	moves = 0;
	check = copy_list(amt_a, list_a);
	check = rot_to_trn_check(check, amt_a, get_biggest(check, amt_a), &moves);
//	ts_print(amt_a, check);
	if (in_order(amt_a, check) == 1)
	{
		free(check);
		check = NULL;
		return (1);
	}
	free(check);
	check = NULL;
	return (0);

}

int			good_pos(int to_sort, int *list_a, int amt_a, int i)
{
	int cmp_bef;
	int cmp_af;

	cmp_af = i + 1;
	cmp_bef = i - 1;
	if (i == 0)
		cmp_bef = amt_a - 1;
	if (i == amt_a - 1)
		cmp_af = 0;
	if (to_sort > list_a[cmp_bef] && to_sort < list_a[cmp_af])
		return (1);
	else
		return (0);
}
