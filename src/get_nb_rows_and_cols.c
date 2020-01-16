/*
** EPITECH PROJECT, 2019
** get_nb_rows_and_cols.c
** File description:
** get_nb_rows_and_cols.c
*/

#include "my.h"

int bigger_line(int line_1, int line_2)
{
    if (line_2 > line_1)
        line_1 = line_2;
    return (line_1);
}

int get_nb_cols(char *buffer)
{
    int i = 0;
    int line_1 = 0;
    int line_2 = 0;

    for (int i = 0; buffer[i] != '\n'; i++)
        line_1++;
    i++;
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            line_1 = bigger_line(line_1, line_2);
            line_2 = 0;
            i++;
        }
        line_2++;
        i++;
    }
    return (line_1);
}

int get_nb_rows(char *buffer)
{
    int nb_rows = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n')
            nb_rows++;
    return (nb_rows);
}
