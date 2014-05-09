/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 18:03:21 by npineau           #+#    #+#             */
/*   Updated: 2013/12/22 19:09:20 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "fdf.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_grid	*grid;
	int		fd;

	grid = NULL;
	if (argc != 2)
	{
		ft_putendl("usage: ./fdf <file>");
		return (-1);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		perror(argv[1]);
	if (fd > -1)
	{
		if (ft_get_grid(&grid, fd) == -1)
			perror(NULL);
		ft_print_grid(grid);
		if (fd > 0)
		{
			if (close(fd) == -1)
				perror(NULL);
		}
	}
	return (0);
}
