/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 18:03:21 by npineau           #+#    #+#             */
/*   Updated: 2013/12/17 18:34:12 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	char	**grid;

	while (argc > 0)
	{
		if (ft_get_grid(&grid, &argc, &argv) == -1)
			perror();
		ft_print_grid(&grid);
	}
	return (0);
}
