/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_sub.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 16:36:55 by tbui              #+#    #+#             */
/*   Updated: 2016/05/27 16:36:56 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_for_dob(int *list, int amt)
{
	int i;
	int k;
	int tmp;
	int tmppos;

	k = 0;
	tmp = list[k];
	while (k < amt)
	{
		tmp = list[k];
		tmppos = k;
		i = 0;
		while (i < amt)
		{
			if (list[i] == tmp && i != tmppos)
				return (0);
			i++;
		}
		k++;
	}
	return (1);
}

int			err_out(int *list_a)
{
	ft_putstr("Error\n");
	free(list_a);
	list_a = NULL;
	return (0);
}

int			ft_validate(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] != '-')
				return (0);
		}
		i++;
	}
	return (1);
}

int			in_order(int amt_a, int *list_a)
{
	int i;
	int tmp;

	i = 0;
	tmp = list_a[i];
	i++;
	while (i < amt_a)
	{
		if (tmp > list_a[i])
			return (0);
		tmp = list_a[i];
		i++;
	}
	return (1);
}

int			ft_max_int(int nbr, char *str)
{
	int		i;
	int		tmp;
	char	c;

	i = 0;
	c = str[i] + '0';
	tmp = nbr % 10;
	if (nbr > 2147483647)
		return (0);
	if (nbr < -2147483647)
		return (0);
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		c = str[i] - 48;
		tmp = nbr % 10;
		if (tmp != c && str[0] != '-')
			return (0);
		i--;
		nbr = nbr / 10;
	}
	return (1);
}
