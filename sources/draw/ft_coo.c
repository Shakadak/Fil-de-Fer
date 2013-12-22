/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 13:13:25 by npineau           #+#    #+#             */
/*   Updated: 2013/12/22 16:53:13 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "fdf.h"

/*
** ft_coo convert the given 3D coordinate into 2D one.
*/

t_coo	ft_coo(int x, int y, int z)
{
	t_coo	new;

	new.c = 16777215 - (z * 42373567 % 16777215);
	x *= 50;
	z *= -4;
	y *= 50;
	new.x = (x - y) * 0.894427191 + 960;
	new.y = (z + (x + y) * 0.4472135955) + 128;
	return (new);
}
