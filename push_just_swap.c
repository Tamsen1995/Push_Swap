/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:42:56 by tbui              #+#    #+#             */
/*   Updated: 2016/06/14 13:42:58 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			needs_jst_swap(int amt_a, int *list_a)
{
	int i;
	int tmp;

	i = 0;
	tmp = list_a[i];
	i++;
	while (i < amt_a - 2)
	{
		if (tmp > list_a[i])
			return (0);
		if (tmp > list_a[amt_a - 2] || tmp > list_a[amt_a - 1])
			return (0);
		tmp = list_a[i];
		i++;
	}
	if (list_a[amt_a - 2] > list_a[amt_a - 1])
		return (1);
	return (0);
}

int			*swap_it(int amt_a, int *list_a, int *moves)
{
	list_a = ft_swap_list(amt_a, list_a);
	ft_putstr("sa\n");
	(*moves)++;
	return (list_a);
}
