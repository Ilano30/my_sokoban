/*
** EPITECH PROJECT, 2019
** my_popup_functions.c
** File description:
** my_popup_functions.c
*/

#include "my_sokoban.h"
#include "my.h"
#include "display.h"

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

void display(char **map, char *buffer, int value, int hit, WINDOW *boite)
{
    if (LINES < get_nb_rows(buffer) + 7 || COLS < get_nb_cols(buffer) + 35)
        mvprintw(LINES/2, (COLS / 2) - (13 / 2), "Too Small !!!");
    else
        switch (value) {
        case -1:
            menu_display(boite);
            break;
        case 0:
            win_display(boite, hit);
            break;
        case 1:
            lose_display(boite);
            break;
        case 3:
            pause_display(boite);
            break;
        case 2:
            map_display(map, get_nb_rows(buffer), get_nb_cols(buffer), hit);
            break;
        }
}
