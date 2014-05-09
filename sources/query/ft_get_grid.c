/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 12:50:46 by npineau           #+#    #+#             */
/*   Updated: 2013/12/22 19:25:59 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "fdf.h"
#include "get_next_line.h"

static t_grid	*ft_grid_new(int z, t_grid *current, t_grid *up);
static void		ft_fill_line(char *line, t_grid *up, t_grid **left);

int				ft_get_grid(t_grid **grid, int fd)
{
	t_grid	*up;
	char	*line;
	int		ret;

	up = NULL;
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		ft_fill_line(line, up, grid);
		free(line);
		up = *grid;
		grid = &(*grid)->down;
	}
	if (ret == -1)
		return (-1);
	return (0);
}

static t_grid	*ft_grid_new(int z, t_grid *left, t_grid *up)
{
	t_grid	*new;

	if ((new = (t_grid *)malloc(sizeof(t_grid))) == NULL)
	{
		perror(NULL);
		return (NULL);
	}
	new->z = z;
	new->exist = 1;
	new->right = NULL;
	new->down = NULL;
	if (left)
		left->right = new;
	if (up)
		up->down = new;
	return (new);
}

static void		ft_fill_line(char *line, t_grid *up, t_grid **left)
{
	t_grid	*new;

	new = NULL;
	while (*line)
	{
		if (ft_iscalc(*line))
		{
			new = ft_grid_new(ft_getnbr(&line), *left, up);
			if (*left)
				left = &new;
			else
				*left = new;
			if (up)
				up = up->right;
		}
		else
			line++;
	}
	if (new == NULL)
	{
		new = ft_grid_new(0, *left, up);
		new->exist = 0;
		*left = new;
	}
}
