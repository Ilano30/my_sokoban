/*
** EPITECH PROJECT, 2019
** display_array.c
** File description:
** display_array.c
*/

#include "my.h"
#include "my_sokoban.h"

int display_array(char **array, int nb_rows)
{
    for (int i = 0; i != nb_rows; i++)
        printw(array[i]);
    return (0);
}
