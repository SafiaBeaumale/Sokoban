/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_player_move.c
*/

#include "include/sokoban.h"
#include "include/my.h"

int *my_key_up(int *p_position, int key, int x, int y)
{
    if (mvinch(p_position[y] - 1, p_position[x]) != '#')
        return (my_up(p_position));
    return (p_position);
}

int *my_key_down(int *p_position, int key, int x, int y)
{
    if (mvinch(p_position[y] + 1, p_position[x]) != '#')
        return (my_down(p_position));
    return (p_position);
}

int *my_key_right(int *p_position, int key, int x, int y)
{
    if (mvinch(p_position[y], p_position[x] + 1) != '#')
        return (my_right(p_position));
    return (p_position);
}

int *my_key_left(int *p_position, int key, int x, int y)
{
    if (mvinch(p_position[y], p_position[x] - 1) != '#')
        return (my_left(p_position));
    return (p_position);
}

int *my_player_move(int key, int *p_position)
{
    int y = 0;
    int x = 1;

    switch (key) {
        case KEY_UP:
            my_key_up(p_position, key, x, y);
        break;
        case KEY_DOWN:
            my_key_down(p_position, key, x, y);
        break;
        case KEY_LEFT:
            my_key_left(p_position, key, x, y);
        break;
        case KEY_RIGHT:
            my_key_right(p_position, key, x, y);
        break;
    }
    return (p_position);
}
