/*
** EPITECH PROJECT, 2019
** move_management_2.c
** File description:
** move_management_2.c
*/

#include "my.h"
#include "my_sokoban.h"

void left_management(char **map, int pi, int pj, char **saved_map)
{
    if (map[pi][pj - 1] != '#' && map[pi][pj - 1] != 'X') {
        map[pi][pj - 1] = 'P';
        map[pi][pj] = ' ';
    }
    if (map[pi][pj - 1] == 'X' && map[pi][pj - 2] != '#' &&
        map[pi][pj - 2] != 'X') {
        map[pi][pj - 2] = 'X';
        map[pi][pj - 1] = 'P';
        map[pi][pj] = ' ';
    }
    if (saved_map[pi][pj] == 'O' && map[pi][pj - 1] != '#' &&
        map[pi][pj - 1] != 'X')
        map[pi][pj] = 'O';
}

void right_management(char **map, int pi, int pj, char **saved_map)
{
    if (map[pi][pj + 1] != '#' && map[pi][pj + 1] != 'X') {
        map[pi][pj + 1] = 'P';
        map[pi][pj] = ' ';
    }
    if (map[pi][pj + 1] == 'X' && map[pi][pj + 2] != '#' &&
        map[pi][pj + 2] != 'X') {
        map[pi][pj + 2] = 'X';
        map[pi][pj + 1] = 'P';
        map[pi][pj] = ' ';
    }
    if (saved_map[pi][pj] == 'O' && map[pi][pj + 1] != '#' &&
        map[pi][pj + 1] != 'X')
        map[pi][pj] = 'O';
}

void down_management(char **map, int pi, int pj, char **saved_map)
{
    if (map[pi + 1][pj] != '#' && map[pi + 1][pj] != 'X') {
        map[pi + 1][pj] = 'P';
        map[pi][pj] = ' ';
    }
    if (map[pi + 1][pj] == 'X' && map[pi + 2][pj] != '#' &&
        map[pi + 2][pj] != 'X') {
        map[pi + 2][pj] = 'X';
        map[pi + 1][pj] = 'P';
        map[pi][pj] = ' ';
    }
    if (saved_map[pi][pj] == 'O' && map[pi + 1][pj] != '#' &&
        map[pi + 1][pj] != 'X')
        map[pi][pj] = 'O';
}

void up_management(char **map, int pi, int pj, char **saved_map)
{
    if (map[pi - 1][pj] != '#' && map[pi - 1][pj] != 'X') {
        map[pi - 1][pj] = 'P';
        map[pi][pj] = ' ';
    }
    if (map[pi - 1][pj] == 'X' && map[pi - 2][pj] != '#' &&
        map[pi - 2][pj] != 'X') {
        map[pi - 2][pj] = 'X';
        map[pi - 1][pj] = 'P';
        map[pi][pj] = ' ';
    }
    if (saved_map[pi][pj] == 'O' && map[pi - 1][pj] != '#' &&
        map[pi - 1][pj] != 'X')
        map[pi][pj] = 'O';
}
