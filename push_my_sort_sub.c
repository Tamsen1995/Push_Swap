/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sort_sub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 15:02:26 by tbui              #+#    #+#             */
/*   Updated: 2016/05/27 15:02:29 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			choose_trn(int *list_a, int amt_a, int pivot)
{
	int trn;
	int i;

	i = 0;
	trn = pivot;
	while (i < amt_a)
	{
		if (list_a[i] < trn)
			trn = list_a[i];
		i++;
	}
	return (trn);
}

int			lft_or_right(int *list_a, int amt_a, int trn)
{
	int i;

	i = 0;
	while (list_a[i] != trn && i < amt_a)
		i++;
	if (i < amt_a / 2)
		return (0);
	else
		return (1);
}

int			*rot_to_trn(int *list_a, int amt_a, int trn, int *moves)
{
	int last;

	last = amt_a - 1;
	while (trn != list_a[0])
	{
		list_a = ft_rotate_list(amt_a, list_a);
		ft_putstr("rb\n");
		(*moves)++;
	}
	return (list_a);
}

int			*rev_to_trn(int *list_a, int amt_a, int trn, int *moves)
{
	int last;

	last = amt_a - 1;
	while (trn != list_a[0])
	{
		list_a = ft_rev_rot(amt_a, list_a);
		ft_putstr("rrb\n");
		(*moves)++;
	}
	return (list_a);
}
