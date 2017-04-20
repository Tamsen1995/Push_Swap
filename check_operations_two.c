/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_operations_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 19:54:09 by tbui              #+#    #+#             */
/*   Updated: 2016/07/26 19:54:11 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
