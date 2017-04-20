/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ft_checker_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 18:42:23 by tbui              #+#    #+#             */
/*   Updated: 2016/07/26 18:42:25 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int			*take_instructions_b(char *line, int *list_b, int amt_b)
{
	if (ft_strcmp(line, "rb") == 0)
		list_b = ft_rotate_list(amt_b, list_b);
	else if (ft_strcmp(line, "rrb") == 0)
		list_b = ft_rev_rot(amt_b, list_b);
	else if (ft_strcmp(line, "sb") == 0)
		list_b = ft_swap_list(amt_b, list_b);
	return (list_b);
}

int			right_input(char *line)
{
	if (ft_strcmp(line, "ra") != 0 && \
		ft_strcmp(line, "rb") != 0 && \
		ft_strcmp(line, "rra") != 0 && \
		ft_strcmp(line, "pa") != 0 && \
		ft_strcmp(line, "sa") != 0 && \
		ft_strcmp(line, "pb") != 0 && \
		ft_strcmp(line, "sb") != 0 && \
		ft_strcmp(line, "rrb") != 0 && \
		ft_strcmp(line, "rrr") != 0 && \
		ft_strcmp(line, "rr") != 0)
		return (0);
	return (1);
}

int			*take_instructions_a(int *list_a, int amt_a, char *line)
{
	if (ft_strcmp(line, "rra") == 0)
		list_a = ft_rev_rot(amt_a, list_a);
	else if (ft_strcmp(line, "sa") == 0)
		list_a = ft_swap_list(amt_a, list_a);
	else if (ft_strcmp(line, "ra") == 0)
		list_a = ft_rotate_list(amt_a, list_a);
	return (list_a);
}

int			*take_instructions(int *list_a, int *list_b, int amt_a, int *moves)
{
	int		amt_b;
	char	*line;

	amt_b = 0;
	while (get_next_line(0, &line) == 1)
	{
		(*moves)++;
		if (right_input(line) == 0)
			return (NULL);
		if (ft_strcmp(line, "pa") == 0)
			ft_push_list(list_b, &amt_b, list_a, &amt_a);
		else if (ft_strcmp(line, "rra") == 0 || ft_strcmp(line, "sa") == 0 ||\
					ft_strcmp(line, "ra") == 0)
			list_a = take_instructions_a(list_a, amt_a, line);
		else if (ft_strcmp(line, "pb") == 0)
			ft_push_list(list_a, &amt_a, list_b, &amt_b);
		else if (ft_strcmp(line, "rrr") == 0)
			ft_rev_rot_both(amt_a, list_a, amt_b, list_b);
		else if (ft_strcmp(line, "rr") == 0)
			ft_rotate_both(amt_a, list_a, amt_b, list_b);
		else
			list_b = take_instructions_b(line, list_b, amt_b);
		ft_putstr(line);
		printf("\n");
	}
	ts_print(amt_a, list_a);
	return (list_a);
}

int			main_validation(char **arr, int *list_a, int i)
{
	if (ft_validate(arr[i]) == 0)
		return (err_out(list_a));
	list_a[i] = ft_atoi(arr[i]);
	if (ft_max_int(list_a[i], arr[i]) == 0)
		return (err_out(list_a));
	return (1);
}
