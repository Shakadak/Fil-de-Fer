/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:40:25 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:41:15 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UNISTD_H
# define UNISTD_H
# include <unistd.h>
#endif

void	ft_putstr(char const *s)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i] != 0)
		{
			write(1, &s[i], 1);
			i++;
		}
	}
}
