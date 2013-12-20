/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 12:50:46 by npineau           #+#    #+#             */
/*   Updated: 2013/12/20 19:26:16 by npineau          ###   ########.fr       */
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
	t_grid	**tmp;
	t_grid	*up;
	char	*line;
	int		ret;

	tmp = grid;
	up = NULL;
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		ft_fill_line(line, up, tmp);
		free(line);
		up = *tmp;
		tmp = &(*tmp)->down;
	}
	if (ret == -1)
		return (-1);
	return (0);
}

/*
** Potentiel modification a faire au niveau des adresses envoyees.
*/

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
	t_grid	**tmp;
	t_grid	*new;

	tmp = left;
	if (*line == 0)
	{
		new = ft_grid_new(0, *tmp, up);
		new->exist = 0;
		*tmp = new;
	}
	while (*line)
	{
		if (ft_iscalc(*line))
		{
			new = ft_grid_new(ft_getnbr(&line), *tmp, up);
			if (*tmp)
			{
				(*tmp)->right = new;
				tmp = &(*tmp)->right;
			}
			else
				*tmp = new;
			if (up)
				up = up->right;
//			line--;///////////////////////////////////////////////
		}
		line++;
	}
}
