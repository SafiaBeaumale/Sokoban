/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_error.c
*/

#include "include/sokoban.h"
#include "include/my.h"

void my_error(int number)
{
    endwin();
    exit(number);
}
