/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 12:49:33 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:52:37 by npineau          ###   ########.fr       */
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
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str)
	{
		size++;
		while (size)
		{
			size--;
			str[size] = 0;
		}
		return (str);
	}
	else
		return (NULL);
}
