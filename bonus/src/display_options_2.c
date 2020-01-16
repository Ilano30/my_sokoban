/*
** EPITECH PROJECT, 2019
** display_options_2.c
** File description:
** display_options_2.c
*/

#include "my.h"
#include "my_sokoban.h"
#include "display.h"

void map_display_1(char **map, int nb_rows)
{
    for (int i = 0; i < nb_rows; i++)
        for (int j = 0; map[i][j] != '\n'; j++) {
            switch (map[i][j]) {
            case 'P':
                display_p(map, i, j);
                break;
            case 'X':
                display_x(map, i, j);
                break;
            case 'O':
                display_o(map, i, j);
                break;
            case '#':
                display_hashtag(map, i, j);
                break;
            default:
                display_spaces(map, i, j);
                break;
            }
        }
}

void map_display_2(int nb_rows, int nb_cols, int hit)
{
    attron(COLOR_PAIR(12) | A_BOLD);
    mvprintw(1, (nb_cols / 2) - (10 / 2) + 2, "MY SOKOBAN");
    attroff(COLOR_PAIR(12) | A_BOLD);
    attron(COLOR_PAIR(13));
    mvprintw(nb_rows + 5, (nb_cols / 2) - 2, "Hit ->");
    attroff(COLOR_PAIR(13));
    attron(COLOR_PAIR(1) | A_BOLD);
    mvprintw(nb_rows + 5, (nb_cols / 2) + 5, "%d", hit);
    attroff(COLOR_PAIR(1) | A_BOLD);
    attron(COLOR_PAIR(15));
    mvprintw((nb_rows / 2) + 2, nb_cols + 7, "RESET     ");
    mvprintw((nb_rows / 2) + 3, nb_cols + 7, "PAUSE     ");
    mvprintw((nb_rows / 2) + 4, nb_cols + 7, "MAIN MENU ");
    attroff(COLOR_PAIR(15));
}

void map_display(char **map, int nb_rows, int nb_cols, int hit)
{
    map_display_1(map, nb_rows);
    map_display_2(nb_rows, nb_cols, hit);
    mvaddch((nb_rows / 2) + 2, nb_cols + 18, ':');
    mvaddch((nb_rows / 2) + 3, nb_cols + 18, ':');
    mvaddch((nb_rows / 2) + 4, nb_cols + 18, ':');
    mvprintw((nb_rows / 2) + 2, nb_cols + 20, "Press");
    mvprintw((nb_rows / 2) + 3, nb_cols + 20, "Press");
    mvprintw((nb_rows / 2) + 4, nb_cols + 20, "Press");
    attron(COLOR_PAIR(14) | A_BOLD);
    mvprintw((nb_rows / 2) + 2, nb_cols + 27, "SPACE");
    mvprintw((nb_rows / 2) + 3, nb_cols + 27, "P");
    mvprintw((nb_rows / 2) + 4, nb_cols + 27, "E");
    attroff(COLOR_PAIR(14) | A_BOLD);
}
