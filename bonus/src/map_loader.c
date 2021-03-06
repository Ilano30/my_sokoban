/*
** EPITECH PROJECT, 2019
** map_loader.c
** File description:
** map_loader.c
*/

#include "my_sokoban.h"
#include "my.h"
#include <curses.h>

char **create_map(char *buffer)
{
    char **map;

    map = malloc_2d_array(buffer);
    fill_tab(map, buffer);
    return (map);
}

int end_game_case(char *buffer, char **map, char **saved_map)
{
    int end = -1;

    end = my_popup(buffer, map, saved_map);
    return (end);
}

int sokoban(char const *filepath)
{
    char *buffer;
    char **map;
    char **saved_map;
    int end = 0;

    buffer = open_read_file(filepath);
    map = create_map(buffer);
    saved_map = create_map(buffer);
    end = end_game_case(buffer, map, saved_map);
    return (end);
}

int map_loader(void)
{
    int value = -1;
    int end = -1;
    char *choices[] = {"Map 1 - EASY",
                       "Map 2 - EASY",
                       "Map 3 - EASY",
                       "Map 4 - MEDIUM",
                       "Map 5 - MEDIUM",
                       "Map 6 - MEDIUM",
                       "Map 7 - HARD",
                       "Map 8 - HARD",
                       "Map 9 - HARD"};
    int choice;
    int highlight = 0;
    WINDOW *menu;

    initscr();
    noecho();
    cbreak();
    curs_set(0);
    start_color();
    init_pair(1, 10, COLOR_BLACK);
    init_pair(2, 6, COLOR_BLACK);
    while (1) {
        menu = subwin(stdscr, 20, 31, (LINES/2 - 7) - 4, (COLS/2) - (25/2) - 3);
        box(menu, ACS_VLINE, ACS_HLINE);
        attron(A_BLINK | COLOR_PAIR(1));
        mvprintw(LINES/2 - 9, (COLS / 2) - (25 /2),  "#########################");
        mvprintw(LINES/2 - 8, (COLS / 2) - (25 /2),  "#                       #");
        attroff(A_BLINK | COLOR_PAIR(1));
        attron(COLOR_PAIR(2) | A_BOLD);
        mvprintw(LINES/2 - 7, (COLS / 2) - (25 / 2), "  MY SOKOBAN MAP LOADER  ");
        attroff(COLOR_PAIR(2) | A_BOLD);
        attron(A_BLINK | COLOR_PAIR(1));
        mvprintw(LINES/2 - 7, (COLS / 2) - (25 /2),  "#");
        mvprintw(LINES/2 - 7, (COLS / 2) - (25 /2) + 24,  "#");
        mvprintw(LINES/2 - 6, (COLS / 2) - (25 /2),  "#                       #");
        mvprintw(LINES/2 - 5, (COLS / 2) - (25 /2),  "#########################");
        attroff(A_BLINK | COLOR_PAIR(1));
        mvprintw(LINES/2 - 4, (COLS / 2) - (25 /2),  "                         ");
        mvprintw(LINES/2 - 3, (COLS / 2) - (25 /2),  "                         ");
        for (int i = 0; i < 9; i++) {
            if (i == highlight)
                attron(A_REVERSE);
            mvprintw(i + (LINES/2 - 2), (COLS/2) - (14/2) + 1, choices[i]);
            attroff(A_REVERSE);
        }
        choice = getch();

        switch(choice) {
        case 65:
            highlight--;
            if (highlight == -1)
                highlight = 0;
            break;
        case 66:
            highlight++;
            if (highlight == 9)
                highlight = 8;
            break;
        default:
            break;
        }
        if (choice == 10) {
            value = 0;
            break;
        }
    }
    if (value == 0) {
        if (highlight == 0)
            end = sokoban("maps/map2");
        if (highlight == 1)
            end = sokoban("maps/map1");
        if (highlight == 2)
            end = sokoban("maps/map4");
        if (highlight == 3)
            end = sokoban("maps/map7");
        if (highlight == 4)
            end = sokoban("maps/map5");
        if (highlight == 5)
            end = sokoban("maps/map6");
        if (highlight == 6)
            end = sokoban("maps/map8");
        if (highlight == 7)
            end = sokoban("maps/map9");
        if (highlight == 8)
            end = sokoban("maps/map3");
    }
    return (end);
}
