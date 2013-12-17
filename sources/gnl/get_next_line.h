/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 18:16:25 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:17:50 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFF_SIZE
#  define BUFF_SIZE 2147483646
# endif

int	ft_read_txt(int fd, char **line, char *buff);
int	ft_check_line(char *buff);
int	ft_init_line(char **line);
int	ft_cp_buff(char **line, char *buff);
int	get_next_line(int const fd, char **line);

#endif
