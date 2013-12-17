/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:26:00 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:54:52 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	l;

	l = ft_strlen(src);
	while (l >= 0)
	{
		if (src[l] == c)
			return ((char *)&src[l]);
		l--;
	}
	return (NULL);
}
