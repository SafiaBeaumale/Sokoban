/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_position.c
*/

#include "include/sokoban.h"
#include "include/my.h"

int *my_player_position(char *my_tab)
{
    int i = 0;
    int y = 0;
    int x = 1;
    int *p_position = malloc(sizeof(int) * 2);

    p_position[y] = 0;
    p_position[x] = 0;
    while (my_tab[i] != 'P') {
        i++;
        p_position[x]++;
        if (my_tab[i] == '\n') {
            p_position[x] = 0;
            p_position[y]++;
        }
    }
    p_position[x]--;
    return (p_position);
}
