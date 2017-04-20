/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_sub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 11:42:47 by tbui              #+#    #+#             */
/*   Updated: 2016/06/14 11:42:48 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			piv_or_inf(int pivot, int amta, int *lista)
{
	int trn;

	trn = pivot;
	if (inf_there(lista, amta, pivot) == 1)
		trn = what_inf(lista, amta, pivot);
	return (trn);
}

int			*rot_to_trn_a(int *list_a, int amt_a, int trn, int *moves)
{
	int last;

	last = amt_a - 1;
	while (trn != list_a[0])
	{
		list_a = ft_rotate_list(amt_a, list_a);
		ft_putstr("ra\n");
		(*moves)++;
	}
	return (list_a);
}

int			*rev_to_trn_a(int *list_a, int amt_a, int trn, int *moves)
{
	int last;
	int i;

	i = 0;
	last = amt_a - 1;
	while (trn != list_a[0])
	{
		list_a = ft_rev_rot(amt_a, list_a);
		ft_putstr("rra\n");
		(*moves)++;
		i++;
	}
	return (list_a);
}

int			*turn_to_trn_a(int *listfrom, int amtfrom, int *moves, int trn)
{
	int flag;
	int *new;

	new = NULL;
	flag = lft_or_right(listfrom, amtfrom, trn);
	if (flag == 1)
		new = rot_to_trn_a(listfrom, amtfrom, trn, moves);
	else if (flag == 0)
		new = rev_to_trn_a(listfrom, amtfrom, trn, moves);
	return (new);
}
