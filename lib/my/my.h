/*
** EPITECH PROJECT, 2022
** include
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
char **my_str_to_word_array(char *str, char sep);
int my_getnbr(char *str);
int len_line(char *str, char sep);
int is_sep(char c, char sep);
void disp_tab(char **tab);
char **remplissage(char **tab, char *str);
char **new_tab(int nbr_lines, int lenght_str);

#endif
