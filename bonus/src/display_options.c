/*
** EPITECH PROJECT, 2019
** display_options.c
** File description:
** display_options.c
*/

#include "my.h"
#include "my_sokoban.h"
#include "display.h"

void menu_display(WINDOW *boite)
{
    boite = subwin(stdscr, 12, 29, (LINES/2 - 7), (COLS/2) - (25/2) - 2);
    box(boite, ACS_VLINE, ACS_HLINE);
    attron(A_BLINK | COLOR_PAIR(7));
    mvprintw(LINES/2 - 5, (COLS / 2) - (25 /2),  "#########################");
    mvprintw(LINES/2 - 4, (COLS / 2) - (25 /2),  "#                       #");
    attroff(A_BLINK | COLOR_PAIR(7));
    attron(COLOR_PAIR(6) | A_BOLD);
    mvprintw(LINES/2 - 3, (COLS / 2) - (25 / 2), "  WELCOME IN MY SOKOBAN  ");
    attroff(COLOR_PAIR(6) | A_BOLD);
    attron(A_BLINK | COLOR_PAIR(7));
    mvprintw(LINES/2 - 3, (COLS / 2) - (25 /2),  "#");
    mvprintw(LINES/2 - 3, (COLS / 2) - (25 /2) + 24,  "#");
    mvprintw(LINES/2 - 2, (COLS / 2) - (25 /2),  "#                       #");
    mvprintw(LINES/2 - 1, (COLS / 2) - (25 /2),  "#########################");
    attroff(A_BLINK | COLOR_PAIR(7));
    mvprintw(LINES/2, (COLS / 2) - (15 / 2), "               ");
    attron(COLOR_PAIR(15) | A_BOLD);
    mvprintw(LINES/2 + 1, (COLS / 2) - (15 / 2), "START : Press S");
    mvprintw(LINES/2 + 2, (COLS / 2) - (15 / 2), "QUIT  : Press E");
    attroff(COLOR_PAIR(15) | A_BOLD);
}

void win_display(WINDOW *boite, int hit)
{
    boite = subwin(stdscr, 9, 31, (LINES/2 - 7), (COLS/2) - (27/2) - 2);
    box(boite, ACS_VLINE, ACS_HLINE);
    attron(COLOR_PAIR(7) | A_BOLD);
    mvprintw(LINES/2 - 5, (COLS / 2) - (15 / 2), "    YOU WIN    ");
    attroff(COLOR_PAIR(7) | A_BOLD);
    attron(COLOR_PAIR(7) | A_BLINK);
    mvprintw(LINES/2 - 5, (COLS / 2) - (15 / 2), "!!!");
    mvprintw(LINES/2 - 5, (COLS / 2) - (15/2) + 12, "!!!");
    attroff(COLOR_PAIR(7) | A_BLINK);
    attron(COLOR_PAIR(9));
    mvprintw(LINES/2 - 4, (COLS / 2) - (21 / 2), "you did it in %d hits", hit);
    attroff(COLOR_PAIR(9));
    mvprintw(LINES/2 - 3, (COLS / 2) - (21 / 2), "                     ");
    attron(COLOR_PAIR(6));
    mvprintw(LINES/2 - 2, (COLS / 2) - (19 / 2), "REPLAY    : Press R");
    mvprintw(LINES/2 - 1, (COLS / 2) - (19 / 2), "MAIN MENU : Press E");
    attroff(COLOR_PAIR(6));
}

void lose_display(WINDOW *boite)
{
    boite = subwin(stdscr, 9, 30, (LINES/2 - 7), (COLS/2) - (27/2) - 2);
    box(boite, ACS_VLINE, ACS_HLINE);
    attron(COLOR_PAIR(8) | A_BOLD);
    mvprintw(LINES/2 - 5, (COLS / 2) - (17 / 2), "    YOU LOSE    ");
    attroff(COLOR_PAIR(8) | A_BOLD);
    attron(COLOR_PAIR(8) | A_BLINK);
    mvprintw(LINES/2 - 5, (COLS / 2) - (17 / 2), "...");
    mvprintw(LINES/2 - 5, (COLS / 2) - (17 / 2) + 13, "...");
    attroff(COLOR_PAIR(8) | A_BLINK);
    attron(COLOR_PAIR(10));
    mvprintw(LINES/2 - 4, (COLS / 2) - (26 / 2), "you've stuck all the boxes");
    attroff(COLOR_PAIR(10));
    mvprintw(LINES/2 - 3, (COLS / 2) - (26 / 2), "                          ");
    attron(COLOR_PAIR(6));
    mvprintw(LINES/2 - 2, (COLS / 2) - (19 / 2) - 1, "REPLAY    : Press R");
    mvprintw(LINES/2 - 1, (COLS / 2) - (19 / 2) - 1, "MAIN MENU : Press E");
    attroff(COLOR_PAIR(6));
}

void pause_display(WINDOW *boite)
{
    boite = subwin(stdscr, 9, 30, (LINES/2 - 7), (COLS/2) - (27/2) - 2);
    box(boite, ACS_VLINE, ACS_HLINE);
    attron(COLOR_PAIR(11) | A_BOLD);
    mvprintw(LINES/2 - 5, (COLS/2) - (17 /2), "      PAUSE      ");
    attroff(COLOR_PAIR(11) | A_BOLD);
    attron(COLOR_PAIR(11) | A_BLINK);
    mvprintw(LINES/2 - 5, (COLS/2) - (17 /2), "< < <");
    mvprintw(LINES/2 - 5, (COLS/2) - (17 /2) + 12, "> > >");
    attroff(COLOR_PAIR(11) | A_BLINK);
    mvprintw(LINES/2 - 4, (COLS/2) - (22 /2), "                      ");
    attron(COLOR_PAIR(16));
    mvprintw(LINES/2 - 3, (COLS/2) - (22 /2), "BACK TO GAME : Press Q");
    mvprintw(LINES/2 - 2, (COLS/2) - (22 /2), "MAIN MENU    : Press E");
    attroff(COLOR_PAIR(16));
}
