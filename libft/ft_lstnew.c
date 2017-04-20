/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:07:58 by tbui              #+#    #+#             */
/*   Updated: 2015/11/25 21:33:51 by tbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*alist;
	void	*ptr;

	if (!(ptr = (void *)ft_memalloc(content_size + 1)))
		return (NULL);
	if (content == NULL)
	{
		ptr = NULL;
		content_size = 0;
	}
	else
	{
		if (!(ptr = ft_memcpy(ptr, content, content_size)))
			return (NULL);
	}
	if (!(alist = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (alist != (t_list *)NULL)
	{
		alist->next = NULL;
		alist->content = ptr;
		alist->content_size = content_size;
	}
	return (alist);
}
