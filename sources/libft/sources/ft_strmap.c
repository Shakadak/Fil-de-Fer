/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 12:44:31 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:48:08 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	if (!(s && f))
		return (NULL);
	new = ft_strnew(ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = f((char)s[i]);
		i++;
	}
	return (new);
}
