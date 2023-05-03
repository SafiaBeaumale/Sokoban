/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** main.c
*/

#include "include/sokoban.h"
#include "include/my.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        exit(84);
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        my_help();
        exit(0);
    } else {
        my_sokoban(argv[1]);
    }
    return (0);
}
