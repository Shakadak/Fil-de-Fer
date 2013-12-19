/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 17:58:56 by npineau           #+#    #+#             */
/*   Updated: 2013/12/19 16:45:27 by npineau          ###   ########.fr       */
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
	int			z;
	int			exist;
	s_grid		*right;
	s_grid		*down;
}				t_grid;

#endif
