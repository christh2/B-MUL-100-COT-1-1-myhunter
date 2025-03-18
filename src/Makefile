##
## EPITECH PROJECT, 2022
## make
## File description:
## makefile
##

CC	= gcc

SRC	= move_rect.c	\
	 main.c	\
	 mousse.c	\

OBJ	= $(SRC:.c=.o)

NAME	= my_hunter

all	: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(SRC) -lcsfml-graphics -lcsfml-audio -lcsfml-system

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
