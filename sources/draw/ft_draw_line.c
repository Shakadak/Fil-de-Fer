/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 12:33:50 by npineau           #+#    #+#             */
/*   Updated: 2013/12/22 19:34:47 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <mlx.h>
#include "fdf.h"

void	ft_bresenham(t_mlx *env, t_coo start, t_coo end)
{
	t_coo	d;
	t_coo	s;
	t_coo	err;

	d.x = (start.x - end.x >= 0 ? start.x - end.x : end.x - start.x);
	d.y = (start.y - end.y >= 0 ? start.y - end.y : end.y - start.y);
	s.x = (start.x < end.x ? 1 : -1);
	s.y = (start.y < end.y ? 1 : -1);
	err.x = (d.x > d.y ? d.x : -d.y) / 2;
	while (start.x != end.x || start.y != end.y)
	{
		mlx_pixel_put(env->mlx, env->win, start.x, start.y, start.c + end.c);
		err.y = err.x;
		if (err.y > -d.x)
		{
			err.x -= d.y;
			start.x += s.x;
		}
		if (err.y < d.y)
		{
			err.x += d.x;
			start.y += s.y;
		}
	}
	mlx_pixel_put(env->mlx, env->win, start.x, start.y, start.c + end.c);
}
