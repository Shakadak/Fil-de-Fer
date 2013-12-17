/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:20:29 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:37:41 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STRING_H
# define STRING_H
# include <string.h>
#endif

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	src = (const unsigned char *)ptr;
	if (n && ptr)
	{
		i = 0;
		while (i < n)
		{
			if (src[i] == (unsigned char)c)
				return ((void *)&src[i]);
			i++;
		}
	}
	return (NULL);
}
