/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 16:50:36 by tbui              #+#    #+#             */
/*   Updated: 2016/06/20 16:50:38 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int			*ft_rotate_list(int amt, int *list)
{
	int i;
	int k;
	int tmp;

	i = amt - 1;
	k = amt - 2;
	tmp = list[amt - 1];
	while (i > 0)
		list[i--] = list[k--];
	list[0] = tmp;
	return (list);
}

int			*ft_rev_rot(int amt, int *list)
{
	int i;
	int k;
	int tmp;
	int last;

	last = amt - 1;
	tmp = list[last];
	i = 0;
	k = 0;
	list[last] = list[i];
	i++;
	while (i < amt - 1)
	{
		list[k] = list[i];
		k++;
		i++;
	}
	list[k] = tmp;
	return (list);
}

int			ft_push_list(int *list1, int *amt1, int *list2, int *amt2)
{
	int i;
	int k;

	k = 0;
	i = (*amt2);
	if ((*amt2) < 0 || (*amt1) < 0)
		return (0);
	while (i > 0)
	{
		list2[i] = list2[i - 1];
		i--;
	}
	list2[0] = list1[0];
	(*amt2)++;
	while (k < (*amt1))
	{
		list1[k] = list1[k + 1];
		k++;
	}
	(*amt1)--;
	return (1);
}

int			*ft_swap_list(int amt, int *list)
{
	int *new;
	int i;
	int k;

	i = 2;
	k = 2;
	if (!(new = (int *)malloc(sizeof(int) * amt)))
		return (0);
	new[0] = list[1];
	new[1] = list[0];
	while (i != amt)
	{
		new[i] = list[k];
		i++;
		k++;
	}
	return (new);
}