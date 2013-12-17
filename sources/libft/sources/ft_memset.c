/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:36:46 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:39:59 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STRING_H
# define STRING_H
# include <string.h>
#endif

void	*ft_memset(void *dest, int c, size_t length)
{
	unsigned char	*dst;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	if (length && dest)
	{
		while (i < length)
		{
			dst[i] = (unsigned char)c;
			i++;
		}
	}
	return (dest);
}
