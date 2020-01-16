/*
** EPITECH PROJECT, 2019
** check_end_game_defeat.c
** File description:
** check_end_game_defeat.c
*/

#include "my.h"
#include "my_sokoban.h"

int get_nb_x(char **map, int nb_rows)
{
    int nb_x = 0;

    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; map[i][j] != '\n'; j++)
            if (map[i][j] == 'X')
                nb_x++;
    return (nb_x);
}

int check_stuck(char **map, int i, int j)
{
    if ((map[i][j - 1] == '#' || map[i][j - 1] == 'X') &&
        (map[i - 1][j] == '#' || map[i - 1][j] == 'X'))
        return (1);
    if ((map[i][j - 1] == '#' || map[i][j - 1] == 'X') &&
        (map[i + 1][j] == '#' || map[i + 1][j] == 'X'))
        return (1);
    if ((map[i][j + 1] == '#' || map[i][j + 1] == 'X') &&
        (map[i - 1][j] == '#' || map[i - 1][j] == 'X'))
        return (1);
    if ((map[i][j + 1] == '#' || map[i][j + 1] == 'X') &&
        (map[i + 1][j] == '#' || map[i + 1][j] == 'X'))
        return (1);
    return (0);
}

int check_end_game_defeat(char *buffer, char **map)
{
    int nb_rows = get_nb_rows(buffer);
    int nb_x = get_nb_x(map, nb_rows);
    int nb_x_stuck = 0;

    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; map[i][j] != '\n'; j++)
            if (map[i][j] == 'X' && check_stuck(map, i, j) == 1)
                nb_x_stuck++;
    if (nb_x_stuck == nb_x)
        return (1);
    return (0);
}
