/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_str_to_word_array.c
*/

#include "my.h"
#include <ncurses.h>
#include <stdlib.h>

char **new_tab(int nbr_lines, int lenght_str)
{
    char **tab = malloc(sizeof(char *) * (nbr_lines + 2));
    int i = 0;

    while (i < (nbr_lines + 1)) {
        tab[i] = malloc(sizeof(char) * (lenght_str + 1));
        i++;
    }
    return (tab);
}

char **remplissage(char **tab, char *str)
{
    int i = 0;
    int x = 0;
    int y = 0;

    while (str[i]) {
        if (str[i] == '\n') {
            tab[y][x] = '\0';
            y++;
            x = 0;
            i++;
        }
        tab[y][x] = str[i];
        i++;
        x++;
    }
    return (tab);
}

void disp_tab(char **tab)
{
    int i = 1;

    printw("\n%s", tab[0]);
    while (tab[i]) {
        printw("\n%s", tab[i]);
        i++;
    }
}

char **my_str_to_word_array(char *str, char sep)
{
    int nbr_lines = my_getnbr(str);
    int lenght_str = len_line(str, sep);
    char **tab = new_tab(nbr_lines, lenght_str);

    tab = remplissage(tab, str);
    return (tab);
}
