/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_sub_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:20:52 by tbui              #+#    #+#             */
/*   Updated: 2016/06/14 13:22:22 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_push_out(int *list_b)
{
	free(list_b);
	list_b = NULL;
}

int			main_norm(int *list_a, int j)
{
	if (check_for_dob(list_a, j) == 0)
		return (err_out(list_a));
	ft_push_swap(j, list_a);
	ft_push_swap_end(list_a);
	return (0);
}

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
