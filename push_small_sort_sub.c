/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_sub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 11:37:55 by tbui              #+#    #+#             */
/*   Updated: 2016/06/14 11:37:57 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			get_biggest(int *list_a, int amt_a)
{
	int i;
	int biggest;

	biggest = list_a[amt_a - 1];
	i = 0;
	while (i < amt_a)
	{
		if (list_a[i] > biggest)
			biggest = list_a[i];
		i++;
	}
	return (biggest);
}

int			is_sorted(int nbr, int *sorted, int sorti)
{
	int i;
	int amt_sorted;

	i = 0;
	amt_sorted = sorti + 1;
	while (i < amt_sorted)
	{
		if (nbr == sorted[i])
			return (0);
		i++;
	}
	return (1);
}

int			no_need_to_be_sort(int to_sort, int *list_a, int amt_a)
{
	int i;

	i = 0;
	while (list_a[i] != to_sort)
		i++;
	if (i == 0)
	{
		if (to_sort > list_a[amt_a - 1] && to_sort < list_a[1])
			return (1);
	}
	else if (i == (amt_a - 1))
	{
		if (to_sort > list_a[amt_a - 2] && to_sort < list_a[0])
			return (1);
	}
	else
	{
		if (to_sort > list_a[i - 1] && to_sort < list_a[i + 1])
			return (1);
	}
	return (0);
}

int			get_sort(int *list_a, int amt_a, int **sorted, int *sorti)
{
	int i;
	int biggest;
	int smallest;

	smallest = get_smallest(list_a, amt_a);
	biggest = get_biggest(list_a, amt_a);
	i = 0;
	while ((is_sorted(list_a[i], (*sorted), (*sorti)) == 0 || \
		list_a[i] == biggest || list_a[i] == smallest) \
		&& (i < amt_a - 1))
	{
		i++;
	}
	return (list_a[i]);
}

int			in_reverse(int amt_a, int *list_a)
{
	int i;
	int tmp;

	i = 0;
	tmp = list_a[i];
	i++;
	while (i < amt_a)
	{
		if (tmp < list_a[i])
			return (0);
		tmp = list_a[i];
		i++;
	}
	return (1);
}
