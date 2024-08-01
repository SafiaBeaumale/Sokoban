##
## EPITECH PROJECT, 2022
## my
## File description:
## Makefile
##

SRC		=	my_putchar.c \
			my_putstr.c \
			my_strcmp.c	\
			my_put_nbr.c	\
			my_strlen.c	\
			my_str_to_word_array.c	\
			my_str_to_word_2.c	\

OBJ		=		$(SRC:.c=.o)

CFLAGS  =       -I ./include -g -g3 -W -Wall -Werror -ansi -pedantic

NAME	=		libmy.a

all: 	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp my.h ../../include

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re:		fclean all
