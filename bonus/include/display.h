/*
** EPITECH PROJECT, 2019
** display.h
** File description:
** display.h
*/

#ifndef __DISPLAY_H__
#define __DISPLAY_H__

#define PLAYER_COLOR  1
#define BOX_COLOR     2
#define STORAGE_COLOR 3
#define WALL_COLOR    4
#define SPACE_COLOR   5
#define MENU          6
#define WIN           7
#define LOSE          8
#define WIN_1         9
#define LOSE_1       10
#define PAUSE        11
#define SOKOBAN      12
#define HIT          13
#define KEY_COLOR    14
#define KEY_COLOR_2  15
#define KEY_COLOR_3  16

void menu_display(WINDOW *boite);
void win_display(WINDOW *boite, int hit);
void lose_display(WINDOW *boite);
void pause_display(WINDOW *boite);
void map_display(char **map, int nb_rows, int nb_cols, int hit);
void map_display_1(char **map, int nb_rows);
void map_display_2(int nb_rows, int nb_cols, int hit);
void display_p(char **map, int i, int j);
void display_x(char **map, int i, int j);
void display_o(char **map, int i, int j);
void display_hashtag(char **map, int i, int j);
void display_spaces(char **map, int i, int j);

#endif /*__DISPLAY_H__*/
