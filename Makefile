##
## EPITECH PROJECT, 2022
## B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
## File description:
## Makefile
##

SRC =	main.c	\
		my_help.c	\
		my_sokoban.c	\
		my_open_map.c	\
		my_position.c	\
		my_game.c	\
		my_player_move.c	\
		my_up.c	\
		my_down.c	\
		my_left.c	\
		my_right.c	\
		my_victory.c	\

OBJ = $(SRC:.c=.o)

CFLAGS = -I./include -lncurses

NAME = my_sokoban

$(NAME) :	$(OBJ)
			make -C lib/my/
			gcc -o $(NAME) $(SRC) -L./lib/my -lmy -lncurses

all: $(NAME)

lib:
	make -C lib/my/

clean :
		$(RM) -f *.c~
		$(RM) $(OBJ)

fclean :clean
		$(RM) $(NAME)
		rm -f lib/my/*.o
		rm -f lib/my/libmy.a

re : fclean all
