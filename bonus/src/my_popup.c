/*
** EPITECH PROJECT, 2019
** my_popup.c
** File description:
** my_popup.c
*/

#include "my.h"
#include "my_sokoban.h"
#include "display.h"

void create_init_pair(void)
{
    start_color();
    init_pair(PLAYER_COLOR, 10, COLOR_BLACK);
    init_pair(BOX_COLOR, 11, COLOR_BLACK);
    init_pair(STORAGE_COLOR, 9, COLOR_BLACK);
    init_pair(WALL_COLOR, COLOR_WHITE, COLOR_WHITE);
    init_pair(SPACE_COLOR, COLOR_BLACK, COLOR_BLACK);
    init_pair(MENU, 6, COLOR_BLACK);
    init_pair(WIN, 10, COLOR_BLACK);
    init_pair(LOSE, 13, COLOR_BLACK);
    init_pair(WIN_1, 11, COLOR_BLACK);
    init_pair(LOSE_1, 5, COLOR_BLACK);
    init_pair(PAUSE, 14, COLOR_BLACK);
    init_pair(SOKOBAN, 12, 8);
    init_pair(HIT, 12, COLOR_BLACK);
    init_pair(KEY_COLOR, 12, COLOR_BLACK);
    init_pair(KEY_COLOR_2, 13, COLOR_BLACK);
    init_pair(KEY_COLOR_3, 4, COLOR_BLACK);
}

int get_nb_hit(int input, int hit, int value)
{
    switch (input) {
    case 65:
        if (value == 2)
            hit++;
        break;
    case 66:
        if (value == 2)
            hit++;
        break;
    case 67:
        if (value == 2)
            hit++;
        break;
    case 68:
        if (value == 2)
            hit++;
        break;
    case 32:
        if (value == 2)
            hit = 0;
        break;
    case 115:
        if (value == -1)
            hit = 0;
        break;
    case 114:
        if (value == 0 || value == 1)
            hit = 0;
        break;
    }
    return (hit);
}

int my_popup(char *buffer, char **map, char **saved_map)
{
    WINDOW *boite;
    int input = 0;
    int nb_rows = get_nb_rows(buffer);
    int end_game = -1;
    int value = -1;
    int hit = 0;

    initscr();
    curs_set(FALSE);
    create_init_pair();
    while (1) {
        clear();
        display(map, buffer, value, hit, boite);
        input = getch();
        hit = get_nb_hit(input, hit, value);
        map = move_management(input, map, nb_rows, saved_map);
        end_game = end_management(buffer, map, saved_map, nb_rows);
        if (end_game == 0)
            value = 0;
        if (end_game == 1)
            value = 1;
        if (value == -1) {
            if (input == 115) {
                input = reset_game(map, saved_map, nb_rows);
                value = 2;
            }
            else if (input == 101) {
                end_game = 0;
                break;
            }
        }
        if (value == 3) {
            if (input == 113)
                value = 2;
            else if (input == 101) {
                input = reset_game(map, saved_map, nb_rows);
                value = -1;
            }
        }
        if (value == 0) {
            if (input == 114) {
                input = reset_game(map, saved_map, nb_rows);
                value = 2;
            }
            else if (input == 101) {
                input = reset_game(map, saved_map, nb_rows);
                value = -1;
            }
        }
        if (value == 1) {
            if (input == 114) {
                input = reset_game(map, saved_map, nb_rows);
                value = 2;
            }
            else if (input == 101) {
                input = reset_game(map, saved_map, nb_rows);
                value = -1;
            }
        }
        if (input == 32 && value == 2)
            input = reset_game(map, saved_map, nb_rows);
        if (input == 101) {
            input = reset_game(map, saved_map, nb_rows);
            value = -1;
        }
        if (value == 2 && input == 112)
            value = 3;
    }
    endwin();
    return (end_game);
}
