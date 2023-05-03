/*
** EPITECH PROJECT, 2022
** include
** File description:
** my_sokoban.h
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <ncurses.h>

// === main.c === //
int main(int argc, char **argv);

// === help.c === //
void my_help(void);

// === my_sokoban.c === //
int my_sokoban(char *my_tab);

//=== my_open_map.c === //
char *my_open_map(char const *filepath);

// === my_position.c === //
int *my_player_position(char *tab);

// === my_game.c === //
int my_game(char *my_tab, int *p_position);

// === my_player_move.c === //
int *my_player_move(int key, int *p_position);
int *my_key_up(int *p_position, int key, int x, int y);
int *my_key_right(int *p_position, int key, int x, int y);
int *my_key_left(int *p_position, int key, int x, int y);
int *my_key_down(int *p_position, int key, int x, int y);

// === my_direction.c === //
int *my_up(int *p_position);
int *my_up_condition(int *p_position, int x, int y);
int *my_down(int *p_position);
int *my_down_condition(int *p_position, int x, int y);
int *my_left(int *p_position);
int *my_left_condition(int * p_position, int x, int y);
int *my_right(int *p_position);
int *my_right_condition(int *p_position, int x, int y);

// === my_victory.c === //
int *my_check_victory(int *p_position);

#endif
