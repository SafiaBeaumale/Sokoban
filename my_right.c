/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_direction.c
*/

#include "include/sokoban.h"
#include "include/my.h"

int *my_right_condition(int *p_position, int x, int y)
{
    if (mvinch(p_position[y], p_position[x] + 1) == 'X' &&
        mvinch(p_position[y], p_position[x] + 2) != '#') {
        mvprintw(p_position[y], p_position[x] + 2, "X");
    }
    return (p_position);
}

int *my_right(int *p_position)
{
    int y = 0;
    int x = 1;

    if (mvinch(p_position[y], p_position[x] + 1) +
    mvinch(p_position[y], p_position[x] + 2) < 123 ||
    mvinch(p_position[y], p_position[x] + 1) +
    mvinch(p_position[y], p_position[x] + 2) == 167) {
        my_right_condition(p_position, x, y);
        mvprintw(p_position[y], p_position[x], " ");
        p_position[x]++;
    }
    return (p_position);
}
