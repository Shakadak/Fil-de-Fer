/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 12:32:59 by npineau           #+#    #+#             */
/*   Updated: 2013/12/19 16:59:39 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

void	ft_print_grid(t_grid *grid)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 1920, 1200, "Fil de Fer");
	ft_travel_down(grid, 0, 0);
}

int	ft_travel_down(t_grid *grid, int x, int y)
{
	if (grid->right)
		ft_travel_right(grid, x, y);
	if (grid->down)
		return (ft_travel_down(grid->down, x, y + 1));
	else
		return (0);
}

ft_travel_right(t_grid *grid, int x, int y)
{
	t_coo	current;

	current = ft_coo(x, y, grid->z)
	if (grid->right)
		ft_draw_line(current, ft_coo(x + 1, y, grid->right->z));
	if (grid->down)
	{
		if (grid->down->exist)
			ft_draw_line(current, ft_coo(x, y + 1, grid->down->z));
	}
	if (grid->right)
		return (ft_travel_right(grid->right, x + 1, y));
	else
		return (0);
}
