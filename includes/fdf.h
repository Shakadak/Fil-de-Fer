/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 17:58:56 by npineau           #+#    #+#             */
/*   Updated: 2013/12/21 20:20:26 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define GREEN 0x00FF00

typedef struct	s_coo
{
	int			x;
	int			y;
}				t_coo;

typedef struct	s_grid
{
	int				z;
	int				exist;
	struct s_grid	*right;
	struct s_grid	*down;
}					t_grid;

typedef struct	s_mlx
{
	void		*mlx;
	void		*win;
	t_grid		*grid;
}				t_mlx;

int		ft_getnbr(char **str);
int		ft_iscalc(char c);
int		ft_get_grid(t_grid **grid, int fd);
void	ft_print_grid(t_grid *grid);
int		ft_travel_down(t_mlx *env, t_grid *grid, int x, int y);
int		ft_travel_right(t_mlx *env, t_grid *grid, int x, int y);
void	ft_draw_line(t_mlx *env, t_coo start, t_coo end);
t_coo	ft_coo(int x, int y, int z);
int		expose_hook(t_mlx *env);
int	key_hook(int	keycode, t_mlx *env);

#endif
