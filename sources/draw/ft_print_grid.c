/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 12:32:59 by npineau           #+#    #+#             */
/*   Updated: 2013/12/21 20:24:11 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include "fdf.h"

void	ft_print_grid(t_grid *grid)
{
	t_mlx	env;

	env.grid = grid;
	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, 1920, 1200, "Fil de Fer");
	mlx_key_hook(env.win, key_hook, &env);
	mlx_expose_hook(env.win, expose_hook, &env);
	mlx_loop(env.mlx);
}

int		ft_travel_down(t_mlx *env, t_grid *grid, int x, int y)
{
	if (grid->right)
		ft_travel_right(env, grid, x, y);
	if (grid->down)
		return (ft_travel_down(env, grid->down, x, y + 1));
	else
		return (0);
}

int		ft_travel_right(t_mlx *env, t_grid *grid, int x, int y)
{
	t_coo	current;

	current = ft_coo(x, y, grid->z);
	if (grid->right)
		ft_draw_line(env, current, ft_coo(x + 1, y, grid->right->z));
	if (grid->down)
	{
		if (grid->down->exist)
			ft_draw_line(env, current, ft_coo(x, y + 1, grid->down->z));
	}
	if (grid->right)
	{
		return (ft_travel_right(env, grid->right, x + 1, y));
	}
	else
		return (0);
}

int		expose_hook(t_mlx *env)
{
	ft_travel_down(env, env->grid, 0, 0);
	return (0);
}

int	key_hook(int	keycode, t_mlx *env)
{
	if (keycode == 65307)
		exit(0);
	return (0);
}
