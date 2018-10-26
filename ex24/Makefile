# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohun <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 22:58:27 by ibohun            #+#    #+#              #
#    Updated: 2018/10/25 18:32:07 by ibohun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c
DIR = includes
OBJ = ft_putchar.o \
		 ft_putstr.o \
		 ft_strcmp.o \
		 ft_strlen.o \
		 ft_swap.o

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf libft.a

all:
	@gcc -I $(DIR) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

re: fclean all

.PHONY: clean fclean all re
