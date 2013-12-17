/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:13:23 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:57:41 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tolower(int c)
{
	return (c += (('A' <= c && c <= 'Z') ? 32 : 0));
}