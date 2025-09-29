# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcamps-v <rcamps-v@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 12:01:18 by rcamps-v          #+#    #+#              #
#    Updated: 2025/09/29 12:24:18 by rcamps-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft.strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OFILES)
clean:
	rm -rf *.o
fclean: clean
	rm $(NAME)
re: fclean all
