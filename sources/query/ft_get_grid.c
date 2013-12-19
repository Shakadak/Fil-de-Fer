/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 12:50:46 by npineau           #+#    #+#             */
/*   Updated: 2013/12/19 20:57:40 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

static t_grid	*ft_grid_new(int z, t_grid *current, t_grid *up);
static int		ft_fill_line(char *line, t_grid *current, t_grid *up);

int				ft_get_grid(t_grid **grid, int fd)
{
	t_grid	*tmp;
	t_grid	*up;
	char	*line;
	int		ret;

	tmp = *grid;
	up = NULL;
	while ((ret = get_next_line(&line, fd)) == 1)
	{
		ft_fill_line(line, tmp, up);
		free(line);
		up = tmp;
		tmp = tmp->down;
	}
	if (ret == -1)
		return (-1);
	return (0);
}

/*
** Potentiel modification a faire au niveau des adresses envoyees.
*/

static t_grid	*ft_grid_new(int z, t_grid *current, t_grid *up)
{
	t_grid	*new;

	if ((new = (t_grid *)malloc(sizeof(t_grid))) == NULL)
	{
		perror();
		return (NULL);
	}
	new->z = z;
	new->exist = 1;
	new->right = NULL;
	new->down = NULL;
	if (current)
		current->right = new;
	if (up)
		up->down = new;
	return (new);
}

static int		ft_fill_line(char *line, t_grid *current, t_grid *up)
{
	t_grid	*tmp;

	tmp = NULL;
	if (*line == 0)
	{
		ft_grid_new(0, current, up);
		current->exist = 0;
	}
	while (*line)
	{
		if (ft_iscalc(*line))
		{
			ft_grid_new(ft_getnbr(line), current, up);
			if (tmp)
				tmp->right = current;
			if (up)
				up = up->right;
			tmp = current;
//			line--;///////////////////////////////////////////////
//
		}
		line++;
	}

}
