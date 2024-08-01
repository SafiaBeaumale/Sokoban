/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_sokoban.c
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

char *current_map;

int my_sokoban(char *my_tab)
{
    char *my_map = my_open_map(my_tab);
    int *p_position = my_player_position(my_map);
    int key;

    current_map = strdup(my_map);
    signal(SIGWINCH, handle_resize);
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, true);
    mvprintw(0, 0, my_map);
    my_game(my_tab, p_position);
    endwin();
    return (1);
}
