/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 17:27:11 by tbui              #+#    #+#             */
/*   Updated: 2016/05/24 17:27:23 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			inf_there(int *list, int amt, int pivot)
{
	int i;

	i = 0;
	while (i < amt)
	{
		if (list[i] <= pivot)
			return (1);
		i++;
	}
	return (0);
}

int			what_inf(int *list, int amt, int pivot)
{
	int i;
	int trn;

	i = 0;
	trn = pivot;
	while (i < amt)
	{
		if (list[i] < trn)
		{
			trn = list[i];
			return (trn);
		}
		i++;
	}
	return (trn);
}

int			right_left(int *list, int amt, int trn)
{
	int i;
	int middle;

	middle = amt / 2;
	i = 0;
	while (list[i] != trn && i < amt)
		i++;
	if (i < middle)
		return (0);
	else
		return (1);
}

int			*push_to_a(int *lista, int *listb, int amtb, int *moves)
{
	int amta;

	amta = 0;
	while (amtb > 0)
	{
		ft_push_list(listb, &amtb, lista, &amta);
		ft_putstr("pa\n");
		(*moves)++;
	}
	return (lista);
}

int			*quick_sort(int *lista, int *listb, int amta, int *moves)
{
	int amtb;
	int pivot;
	int trn;

	amtb = 0;
	while (amta > 0)
	{
		pivot = lista[amta - 1];
		while (inf_there(lista, amta, pivot) == 1)
		{
			trn = piv_or_inf(pivot, amta, lista);
			lista = turn_to_trn_a(lista, amta, moves, trn);
			(*moves) += ft_push_list(lista, &amta, listb, &amtb);
			ft_putstr("pb\n");
		}
	}
	amta = amtb;
	return (listb);
}
