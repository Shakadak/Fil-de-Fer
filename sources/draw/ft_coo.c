/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 13:13:25 by npineau           #+#    #+#             */
/*   Updated: 2013/12/21 18:27:53 by npineau          ###   ########.fr       */
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

	printf("ft_coo\n");
	x *= 10;
	y *= 10;
	printf("x = %d, y = %d\n", x, y);
	new.x = (x - z) * 0.894427191 + 960;
	new.y = -(y + (x + z) * 0.4472135955) + 128;
	printf("new.x = %d, new.y = %d\n", new.x, new.y);
	printf("sorti ft_coo\n");
	return (new);
}
