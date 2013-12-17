/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:09:44 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:49:57 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STRING_H
# define STRING_H
# include <string.h>
#endif

char	*ft_strncpy(char *copy, const char *src, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && src[index] != 0)
	{
		copy[index] = src[index];
		index++;
	}
	while (index < n)
	{
		copy[index] = 0;
		index++;
	}
	return (copy);
}
