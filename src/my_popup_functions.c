/*
** EPITECH PROJECT, 2019
** my_popup_functions.c
** File description:
** my_popup_functions.c
*/

#include "my_sokoban.h"
#include "my.h"

int end_management(char *buffer, char **map, char **saved_map, int nb_rows)
{
    int end_game = -1;

    if (check_end_game_victory(map, saved_map, nb_rows) == 0)
        end_game = 0;
    if (check_end_game_defeat(buffer, map) == 1)
        end_game = 1;
    return (end_game);
}

int reset_game(char **map, char **saved_map, int nb_rows)
{
    for (int i = 0; i != nb_rows; i++)
        for (int j = 0; saved_map[i][j] != '\n'; j++)
            map[i][j] = saved_map[i][j];
    return (0);
}

void display(char **map, char *buffer)
{
    int nb_rows = get_nb_rows(buffer);
    int nb_cols = get_nb_cols(buffer);
    char *msg = "Too Small !!!";
    int size = my_strlen(msg);

    if (LINES < nb_rows + 2 || COLS < nb_cols + 2)
        mvprintw(LINES/2, (COLS / 2) - (size / 2), msg);
    else
        for (int i = 0; i < nb_rows; i++)
            mvprintw(LINES/2 - nb_rows/2 + i, COLS/2 - nb_cols/2, map[i]);
}
