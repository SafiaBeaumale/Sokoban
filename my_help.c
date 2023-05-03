/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_help.c
*/

#include "include/sokoban.h"
#include "include/my.h"

void my_help(void)
{
    my_putstr("HELLO PLAYER !\n\n");
    my_putstr("USAGE\n");
    my_putstr("./my_sokoban map\n\n");
    my_putstr("REGLES DU JEU\n");
    my_putstr("Le jeu consiste à ranger des boîtes à l'interieur d'un,\n");
    my_putstr("entrepôt en les poussant pour les amener\n");
    my_putstr("sur des emplacements de stockage.\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("Vous êtes le gardien d'un entrepôt.\n");
    my_putstr("La map correspond à l'entrepôt de départ.\n");
    my_putstr("Le 'P' correspond au joueur.\n");
    my_putstr("Les murs sont les '#'.\n");
    my_putstr("Les 'O' sont les emplacements de stockage.\n");
    my_putstr("Les 'X' sont les boites.\n\n");
    my_putstr("---> GOOD LUCK <---\n");
}
