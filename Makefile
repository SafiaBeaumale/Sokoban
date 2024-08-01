##
## EPITECH PROJECT, 2022
## B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
## File description:
## Makefile
##

SRC =	Sources/Core/main.c	\
			Sources/Core/my_game.c	\
			Sources/Core/my_sokoban.c	\
			Sources/Core/my_victory.c	\
			Sources/Input/my_down.c	\
			Sources/Input/my_left.c	\
			Sources/Input/my_player_move.c	\
			Sources/Input/my_position.c	\
			Sources/Input/my_right.c	\
			Sources/Input/my_up.c	\
			Sources/Map/my_open_map.c	\
			Sources/Map/my_resize.c	\
			Sources/Utilities/my_error.c	\
			Sources/Utilities/my_help.c	\

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
