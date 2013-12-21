/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 18:03:21 by npineau           #+#    #+#             */
/*   Updated: 2013/12/21 14:54:12 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "fdf.h"

int	main(int argc, char **argv)
{
	t_grid	*grid;
	int		fd;
	int		i;

	grid = NULL;
	i = (argc == 1 ? 0 : 1);
	while (i < argc)
	{
		if (argc == 1)
			fd = 0;
		else if ((fd = open(argv[i], O_RDONLY)) == -1)
			perror(NULL);
		if (fd > -1)
		{
			if (ft_get_grid(&grid, fd) == -1)
				perror(NULL);
			ft_print_grid(grid);
			if (fd > 0)
				close(fd);
		}
		i++;
	}
	return (0);
}
