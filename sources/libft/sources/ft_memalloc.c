/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:54:02 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:36:00 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#ifndef STDLIB_H
# define STDLIB_H
# include <stdlib.h>
#endif

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(sizeof(void *) * size);
	if (mem)
		ft_bzero(mem, size);
	else
		return (NULL);
	return (mem);
}
