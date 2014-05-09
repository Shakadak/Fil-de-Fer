/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 13:13:25 by npineau           #+#    #+#             */
/*   Updated: 2013/12/22 20:47:31 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

/*
** ft_coo convert the given 3D coordinate into 2D one.
*/

t_coo	ft_coo(int x, int y, int z)
{
	t_coo	new;

	new.c = (16777215 - (((z * z / 2) / 27 * 132344 + 42) % 16777215)) / 2;
	x *= 30;
	z *= -2;
	y *= 30;
	new.x = (x - y) * 0.894427191 + 960;
	new.y = (z + (x + y) * 0.4472135955) + 128;
	return (new);
}
