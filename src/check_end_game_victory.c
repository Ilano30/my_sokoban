/*
** EPITECH PROJECT, 2019
** check_end_game_victory.c
** File description:
** check_end_game_victory.c
*/

#include "my.h"
#include "my_sokoban.h"

int get_nb_o(char **saved_map, int nb_rows)
{
    int nb_o = 0;

    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; saved_map[i][j] != '\n'; j++)
            if (saved_map[i][j] == 'O')
                nb_o++;
    return (nb_o);
}

int check_end_game_victory(char **map, char **saved_map, int nb_rows)
{
    int cmt = 0;
    int nb_o = get_nb_o(saved_map, nb_rows);

    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; saved_map[i][j] != '\n'; j++)
            if (saved_map[i][j] == 'O' && map[i][j] == 'X')
                cmt++;
    if (cmt == nb_o)
        return (0);
    return (1);
}
