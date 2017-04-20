/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 19:55:58 by tbui              #+#    #+#             */
/*   Updated: 2016/07/26 19:56:04 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_rotate_both(int amt1, int *list1, int amt2, int *list2)
{
	list1 = ft_rotate_list(amt1, list1);
	list2 = ft_rotate_list(amt2, list2);
	return ;
}

void		ft_rev_rot_both(int amt1, int *list1, int amt2, int *list2)
{
	list1 = ft_rev_rot(amt1, list1);
	list2 = ft_rev_rot(amt2, list2);
	return ;
}
