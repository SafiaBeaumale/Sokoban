/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_str.c
*/

#include "my.h"

int is_sep(char c, char sep)
{
    if (c == sep)
        return (1);
    if (c != sep)
        return (0);
    return (0);
}

int len_line(char *str, char sep)
{
    int i = 0;
    int j = 0;

    while (str[j] != '\n') {
        j++;
    }
    j++;
    while (str[j] != sep) {
        i++;
        j++;
    }
    return (i);
}

int my_getnbr(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i]) {
        i++;
        if (str[i] == '\n') {
            j++;
        }
    }
    return (j + 1);
}
