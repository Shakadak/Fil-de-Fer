/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 12:33:50 by npineau           #+#    #+#             */
/*   Updated: 2013/12/20 19:41:06 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "fdf.h"

void	ft_draw_line(t_mlx *env, t_coo start, t_coo end)
{
	int	diff_x;
	int	diff_y;
	int	dot;
	int	i;

	i = 0;
	dot = 0;
	diff_y = (end.y - start.y > 0 ? end.y - start.y : start.y - end.y);
	diff_x = (end.x - start.x > 0 ? end.x - start.x : start.x - end.x);
	while (i <= diff_x)
	{
		mlx_pixel_put(env->mlx, env->win, start.x + i, start.y + dot, 0x000F00);
		i++;
		dot = i * (diff_y / diff_x);
	}
}
