/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 11:28:40 by npineau           #+#    #+#             */
/*   Updated: 2013/12/21 14:55:06 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

int	ft_getnbr(char **str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	while ('0' <= **str && **str <= '9')
	{
		res = res * 10 + **str - '0';
		(*str)++;
	}
	while (ft_iscalc(**str))
		(*str)++;
	return (sign * res);
}

int	ft_iscalc(char c)
{
	return (('0' <= c && c <= '9') || c == '-' || c == '+');
}

