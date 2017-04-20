/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 23:12:51 by tbui              #+#    #+#             */
/*   Updated: 2016/05/24 23:12:53 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void		ft_push_swap(int amt_a, int *list_a)
{
	int *list_b;
	int amt_b;
	int moves;
	int i;
	int *res_a;

	i = 0;
	res_a = list_a;
	moves = 0;
	if (!(list_b = (int *)malloc(sizeof(int) * amt_a)))
		return ;
	amt_b = 0;
	if (in_order(amt_a, res_a) == 0 && amt_a >= 15)
	{
		list_b = quick_sort(list_a, list_b, amt_a, &moves);
		res_a = my_sort(list_b, list_a, amt_a, &moves);
	}
	else if (in_order(amt_a, res_a) == 0 && amt_a <= 15)
		res_a = bubble_sort(list_a, list_b, amt_a);
	ft_push_out(list_b);
	return ;
}

void		ft_push_swap_end(int *list_a)
{
	free(list_a);
	list_a = NULL;
}

int			main_deux(char **arr, int *list_a, int i, int j)
{
	if (ft_validate(arr[i]) == 0)
		return (err_out(list_a));
	list_a[j] = ft_atoi(arr[i]);
	if (ft_max_int(list_a[j], arr[i]) == 0)
		return (err_out(list_a));
	return (1);
}

int			main(int argc, char **argv)
{
	int		i;
	int		*list_a;
	int		j;
	char	**arr;

	j = 0;
	i = 0;
	if (argc < 2)
		return (0);
	if (argc > 2)
		arr = get_input_arr(&argc, argv);
	else
		arr = ft_strsplit(argv[1], ' ', &argc);
	if (!(list_a = (int *)malloc(sizeof(int) * argc - 1)))
		return (0);
	while (i < argc)
	{
		if (main_deux(arr, list_a, i, j) == 0)
			return (0);
		j++;
		i++;
	}
	return (main_norm(list_a, j));
}
