/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ft_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 16:35:43 by tbui              #+#    #+#             */
/*   Updated: 2016/06/20 16:35:45 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char		**get_input_arr(int *argc, char **argv)
{
	int		i;
	int		k;
	char	**res;

	i = 0;
	k = 1;
	(*argc)--;
	if (!(res = (char **)malloc(sizeof(char *) * (*argc))))
		return (NULL);
	while (i < (*argc))
	{
		res[i] = ft_strdup(argv[k]);
		i++;
		k++;
	}
	return (res);
}

char		**inverse_table_arr(int argc, char **arr)
{
	int		i;
	int		k;
	char	**res;

	i = 0;
	k = argc - 1;
	if (!(res = (char **)malloc(sizeof(char *) * argc)))
		return (NULL);
	while (k >= 0)
	{
		res[i] = ft_strdup(arr[k]);
		i++;
		k--;
	}
	return (res);
}

int			*inverse_table_arr_int(int argc, int *arr)
{
	int i;
	int k;
	int *res;

	i = 0;
	k = argc - 1;
	if (!(res = (int *)malloc(sizeof(int) * argc)))
		return (NULL);
	while (k >= 0)
	{
		res[i] = arr[k];
		i++;
		k--;
	}
	return (res);
}

int			main_two(int *list_a, int i)
{
	int		*res_a;
	int		moves;
	int		*list_b;

	moves = 0;
	if (!(list_b = (int *)malloc(sizeof(int) * i)))
		return (0);
	if (check_for_dob(list_a, i) == 0)
		return (err_out(list_a));
	res_a = take_instructions(list_a, list_b, i, &moves);
	if (res_a == NULL)
		return (err_out(list_a));
	return (print_result(i, moves, res_a));
}

int			main(int argc, char **argv)
{
	int		i;
	int		*list_a;
	char	**arr;

	i = 0;
	if (argc == 1)
		return (0);
	if (!(list_a = (int *)malloc(sizeof(int) * argc - 1)))
		return (0);
	if (argc > 2)
		arr = get_input_arr(&argc, argv);
	else
		arr = ft_strsplit(argv[1], ' ', &argc);
	while (i < argc)
	{
		if (main_validation(arr, list_a, i) == 0)
			return (0);
		i++;
	}
	return (main_two(list_a, i));
}
