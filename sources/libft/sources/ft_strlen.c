/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:29:05 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:47:55 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef STRING_H
# define STRING_H
# include <string.h>
#endif

size_t	ft_strlen(const char *str)
{
	size_t	much;

	if (!str)
		return (0);
	much = 0;
	while (str[much] != 0)
		much++;
	return (much);
}
