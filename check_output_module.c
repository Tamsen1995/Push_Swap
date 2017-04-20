/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_output_module.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 16:47:53 by tbui              #+#    #+#             */
/*   Updated: 2016/06/20 16:47:55 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int			print_result(int i, int moves, int *res_a)
{
	if (in_order(i, res_a) == 1)
	{
		ft_putstr("OK\n");
		ft_putstr("Moves needed: ");
		ft_putnbr(moves);
		ft_putstr("\n");
	}
	else
	{
		ft_putstr("KO\n");
		ft_putstr("Moves needed: ");
		ft_putnbr(moves);
		ft_putstr("\n");
	}
	free(res_a);
	res_a = NULL;
	return (0);
}

void		ts_print(int amt, int *list_a)
{
	int i;

	i = 0;
	ft_putstr("\n");
	while (i < (amt))
	{
		ft_putnbr(list_a[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("\n\n");
	return ;
}

int			err_out(int *list_a)
{
	ft_putstr("Error\n");
	free(list_a);
	list_a = NULL;
	return (0);
}
