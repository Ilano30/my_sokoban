/*
** EPITECH PROJECT, 2019
** display_char.c
** File description:
** display_char.c
*/

#include "my.h"
#include "my_sokoban.h"
#include "display.h"

void display_p(char **map, int i, int j)
{
    attron(COLOR_PAIR(1));
    attron(A_BOLD);
    mvaddch(i + 3, j + 2, map[i][j]);
    attroff(A_BOLD);
    attroff(COLOR_PAIR(1));
}

void display_x(char **map, int i, int j)
{
    attron(COLOR_PAIR(2));
    mvaddch(i + 3, j + 2, map[i][j]);
    attroff(COLOR_PAIR(2));
}

void display_o(char **map, int i, int j)
{
    attron(COLOR_PAIR(3));
    mvaddch(i + 3, j + 2, map[i][j]);
    attroff(COLOR_PAIR(3));
}

void display_hashtag(char **map, int i, int j)
{
    attron(COLOR_PAIR(4));
    mvaddch(i + 3, j + 2, map[i][j]);
    attroff(COLOR_PAIR(4));
}

void display_spaces(char **map, int i, int j)
{
    attron(COLOR_PAIR(5));
    mvaddch(i + 3, j + 2, map[i][j]);
    attroff(COLOR_PAIR(5));
}
