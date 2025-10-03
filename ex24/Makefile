NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): $(OBJECTS)
	
	ar rc $(NAME) $(OFILES)
clean:
	rm -rf *.o
fclean: clean
	rm $(NAME)
	re: fclean all
