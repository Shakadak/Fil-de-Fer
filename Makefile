# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/20 18:01:14 by npineau           #+#    #+#              #
#    Updated: 2013/12/20 20:04:24 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = fdf

LIBDIR = sources/libft/

LIBFT = libft.a

HEADDIR = includes/ \
		  -I sources/libft/includes/

SRC = sources/draw/ft_coo.c \
	  sources/draw/ft_draw_line.c \
	  sources/draw/ft_print_grid.c \
	  \
	  sources/gnl/get_next_line.c \
	  \
	  sources/query/fdf.c \
	  sources/query/ft_get_grid.c \
	  sources/query/ft_getnbr.c

OBJ = ft_coo.o \
	  ft_draw_line.o \
	  ft_print_grid.o \
	  \
	  get_next_line.o \
	  \
	  fdf.o \
	  ft_get_grid.o \
	  ft_getnbr.o

EFLAG = -Wall -Wextra -Werror

OFLAG = -O3

MLXLIB = -L /usr/X11/lib -lmlx -lXext -lX11

all: $(NAME)

$(NAME): $(LIBDIR)$(LIBFT) $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L $(LIBDIR) -lft $(MLXLIB)

$(LIBDIR)$(LIBFT):
	make -C sources/libft/

$(OBJ):
	$(CC) $(EFLAG) $(OFLAG) -c $(SRC) -I $(HEADDIR)

clean:
	rm -f $(OBJ)
	make -C sources/libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C sources/libft/ fclean

re: fclean all
