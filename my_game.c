/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_game.c
*/

#include "include/sokoban.h"
#include "include/my.h"

int my_game(char *my_tab, int *p_position)
{
    int key;
    int number = 0;
    int vic = 0;

    while (number != 1) {
        refresh();
        key = getch();
        if (key == -1)
            exit(84);
        p_position = my_player_move(key, p_position);
        mvprintw(p_position[0], p_position[1], "P");
        if (vic != 1)
            vic = my_check_victory(p_position);
    }
}
