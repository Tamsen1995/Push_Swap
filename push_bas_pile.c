/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bas_pile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:56:04 by tbui              #+#    #+#             */
/*   Updated: 2016/06/14 13:56:06 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			first_two_switched(int amt_a, int *list_a)
{
	int i;
	int tmp;

	i = 2;
	tmp = list_a[i];
	i++;
	while (i < amt_a)
	{
		if (tmp > list_a[i])
			return (0);
		if (tmp < list_a[0] || tmp < list_a[1])
			return (0);
		tmp = list_a[i];
		i++;
	}
	if (list_a[0] > list_a[1])
		return (1);
	return (0);
}

int			*bas_pile(int amt_a, int *list_a, int *moves)
{
	int i;

	i = 0;
	while (i < 2)
	{
		list_a = ft_rev_rot(amt_a, list_a);
		ft_putstr("rra\n");
		(*moves)++;
		i++;
	}
	list_a = ft_swap_list(amt_a, list_a);
	ft_putstr("sa\n");
	(*moves)++;
	i = 0;
	while (i < 2)
	{
		list_a = ft_rotate_list(amt_a, list_a);
		ft_putstr("ra\n");
		(*moves)++;
		i++;
	}
	return (list_a);
}
