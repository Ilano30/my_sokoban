/*
** EPITECH PROJECT, 2019
** my_popup.c
** File description:
** my_popup.c
*/

#include "my.h"
#include "my_sokoban.h"

void init_screen(void)
{
    initscr();
    noecho();
    curs_set(0);
}

void close_screen(char *buffer, char **map)
{
    display(map, buffer);
    refresh();
    endwin();
}

int my_popup(char *buffer, char **map, char **saved_map, int nb_rows)
{
    int input = 0;
    int end_game = -1;

    init_screen();
    while (1) {
        clear();
        display(map, buffer);
        input = getch();
        map = move_management(input, map, nb_rows, saved_map);
        if (input == 32)
            input = reset_game(map, saved_map, nb_rows);
        end_game = end_management(buffer, map, saved_map, nb_rows);
        if (end_game == 1 || end_game == 0) {
            clear();
            refresh();
            break;
        }
    }
    close_screen(buffer, map);
    return (end_game);
}
