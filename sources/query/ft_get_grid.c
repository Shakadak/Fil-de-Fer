/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 12:50:46 by npineau           #+#    #+#             */
/*   Updated: 2013/12/19 11:34:24 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

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
	while (*line)
	{
		if (ft_iscalc(*line))
		{
			current = ft_grid_new(ft_getnbr(&line), current, up);
//			line--;
		}
		line++;
	}
}
