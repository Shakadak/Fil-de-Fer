/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 16:48:17 by npineau           #+#    #+#             */
/*   Updated: 2013/12/12 12:24:53 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#ifndef STDLIB_H
# define STDLIB_H
# include <stdlib.h>
#endif

static void	ft_elemdel(void *content, size_t size);

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	new = NULL;
	if (lst)
	{
		new = ft_lstnew((f(lst))->content, lst->content_size);
		if (!new)
			return (NULL);
		if (lst->next)
		{
			new->next = ft_lstmap(lst->next, f);
			if (new->next == NULL)
				ft_lstdel(&new, &ft_elemdel);
		}
	}
	return (new);
}

static void	ft_elemdel(void *content, size_t size)
{
	free(content);
	content = NULL;
	size = 0;
}
