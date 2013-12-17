/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 14:00:53 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:31:45 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#ifndef STDLIB_H
# define STDLIB_H
# include <stdlib.h>
#endif

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
