/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 13:13:25 by npineau           #+#    #+#             */
/*   Updated: 2013/12/20 19:41:25 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** ft_coo convert the given 3D coordinate into 2D one.
*/

t_coo	ft_coo(int x, int y, int z)
{
	t_coo	new;

	new.x = (x - z) * 0.894427191;
	new.y = y + (x + z) * 0.4472135955;
	return (new);
}
