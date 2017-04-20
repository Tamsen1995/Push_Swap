/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 14:58:37 by tbui              #+#    #+#             */
/*   Updated: 2016/05/27 14:58:46 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			*turn_to_trn(int *listfrom, int amtfrom, int *moves, int trn)
{
	int flag;
	int *new;

	new = NULL;
	flag = lft_or_right(listfrom, amtfrom, trn);
	if (flag == 1)
		new = rot_to_trn(listfrom, amtfrom, trn, moves);
	else if (flag == 0)
		new = rev_to_trn(listfrom, amtfrom, trn, moves);
	return (new);
}

int			get_smallest(int *listfrom, int amtfrom)
{
	int smallest;
	int i;

	i = 0;
	smallest = listfrom[amtfrom - 1];
	while (i < amtfrom)
	{
		if (listfrom[i] < smallest)
			smallest = listfrom[i];
		i++;
	}
	return (smallest);
}

int			*my_sort(int *listfrom, int *listto, int amtfrom, int *moves)
{
	int trn;
	int amtto;

	amtto = 0;
	(*moves) = 0;
	while (amtfrom > 0)
	{
		trn = 0;
		trn = get_smallest(listfrom, amtfrom);
		listfrom = turn_to_trn(listfrom, amtfrom, moves, trn);
		(*moves) += ft_push_list(listfrom, &amtfrom, listto, &amtto);
		ft_putstr("pa\n");
	}
	return (listto);
}
