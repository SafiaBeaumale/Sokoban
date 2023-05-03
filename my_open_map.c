/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_open_map.c
*/

#include "include/sokoban.h"
#include "include/my.h"

char *my_open_map(char const *filepath)
{
    struct stat st;

    int folder = open(filepath, O_RDONLY);
    if (stat(filepath, &st) == -1)
        exit(84);
    char *buffer = malloc(sizeof(char) * st.st_size + 1);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != ' ' && buffer[i] != '\n' && buffer[i] != '#'
        && buffer[i] != 'X' && buffer[i] != 'P' && buffer[i] != 'O')
            my_putstr("Invalid map !\n");
            exit(84);
    }
    read(folder, buffer, st.st_size);
    if (read(folder, buffer, st.st_size) == -1)
        exit(84);
    buffer[st.st_size] = '\0';
    return (buffer);
    free(buffer);
}
