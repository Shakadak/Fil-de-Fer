/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 18:03:21 by npineau           #+#    #+#             */
/*   Updated: 2013/12/19 11:39:16 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	char	**grid;
	int		fd;

	i = (argc == 1 ? 0 : 1);
	while (i < argc)
	{
		i++;
		if (argc == 1)
			fd = 0;
		else if ((fd = open(argv[i], O_RDONLY)) == -1)
			perror();
		if (fd > -1)
		{
			if (ft_get_grid(&grid, fd) == -1)
				perror();
			ft_print_grid(&grid);
			if (fd > 0)
				close(fd);
		}
	}
	return (0);
}
