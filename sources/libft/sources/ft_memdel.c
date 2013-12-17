/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:53:51 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:39:28 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STDLIB_H
# define STDLIB_H
# include <stdlib.h>
#endif
#ifndef STRING_H
# define STRING_H
# include <string.h>
#endif

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
