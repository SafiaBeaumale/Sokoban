/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-sokoban-safia.beaumale-mesmar
** File description:
** my_resize.c
*/

#include "../../include/sokoban.h"
#include "../../include/my.h"

void redraw_map(void)
{
    clear();
    mvprintw(0, 0, "%s", current_map);
}

void handle_resize(int sig)
{
    int rows;
    int cols;

    getmaxyx(stdscr, rows, cols);
    if (rows < MIN_ROWS || cols < MIN_COLS) {
        clear();
        mvprintw(rows / 2, (cols - strlen("Please resize the terminal")) / 2,
        "Please resize the terminal");
    } else {
        redraw_map();
    }
    refresh();
}
