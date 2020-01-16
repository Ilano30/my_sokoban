/*
** EPITECH PROJECT, 2019
** malloc_2d_array.c
** File description:
** malloc_2d_array.c
*/

#include "my.h"
#include "my_sokoban.h"

char **malloc_2d_array(char *buffer)
{
    char **arr;
    int rows = get_nb_rows(buffer);
    int cols = get_nb_cols(buffer);
    int i = 0;

    arr = malloc(sizeof(char *) * rows + 1);
    for (i = 0; i != rows; i++)
        arr[i] = malloc(sizeof(char) * cols + 1);
    arr[i] = NULL;
    return (arr);
}
