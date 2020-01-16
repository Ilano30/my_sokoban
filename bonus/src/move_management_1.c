/*
** EPITECH PROJECT, 2019
** move_management.c
** File description:
** move_management.c
*/

#include "my.h"
#include "my_sokoban.h"

char **move_left(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;

    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; map[i][j] != '\n'; j++)
            if (map[i][j] == 'P') {
                pi = i;
                pj = j;
            }
    left_management(map, pi, pj, saved_map);
    return (map);
}

char **move_right(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;

    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; map[i][j] != '\n'; j++)
            if (map[i][j] == 'P') {
                pi = i;
                pj = j;
            }
    right_management(map, pi, pj, saved_map);
    return (map);
}

char **move_down(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;

    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; map[i][j] != '\n'; j++)
            if (map[i][j] == 'P') {
                pi = i;
                pj = j;
            }
    down_management(map, pi, pj, saved_map);
    return (map);
}

char **move_up(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;

    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; map[i][j] != '\n'; j++)
            if (map[i][j] == 'P') {
                pi = i;
                pj = j;
            }
    up_management(map, pi, pj, saved_map);
    return (map);
}

char **move_management(int input, char **map, int nb_rows, char **saved_map)
{
    switch (input) {
    case 67:
        map = move_right(map, nb_rows, saved_map);
        break;
    case 68:
        map = move_left(map, nb_rows, saved_map);
        break;
    case 65:
        map = move_up(map, nb_rows, saved_map);
        break;
    case 66:
        map = move_down(map, nb_rows, saved_map);
        break;
    default:
        break;
    }
    return (map);
}
