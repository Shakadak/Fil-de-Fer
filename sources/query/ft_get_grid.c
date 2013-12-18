/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 12:50:46 by npineau           #+#    #+#             */
/*   Updated: 2013/12/18 14:22:31 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int				ft_get_grid(char ***grid, int fd)
{
	t_list	*tmp;
	char	*line;
	int		nb_line;

	grid = NULL;
	tmp = NULL;
	nb_line = 0;
	while (get_next_line(line, fd) == 1)
	{
		nb_line++;
		ft_lstadd(tmp, ft_list_new(ft_strsplit(line, ' ')));
		free(line)
	}
	line = NULL;
	*grid = (char **)malloc(nb_line * sizeof(char *) + 1);
	if (*grid == NULL)
	{
		ft_lst_del(tmp);
		return (-1)
	ft_transfer_grid(grid, tmp, nb_line);
}

static t_list	*ft_list_new(char **content)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
	{
		perror();
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}

ft_transfer_grid
