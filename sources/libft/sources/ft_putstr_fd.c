/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 16:08:30 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:41:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UNISTD_H
# define UNISTD_H
# include <unistd.h>
#endif

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
