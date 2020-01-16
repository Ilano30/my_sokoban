/*
** EPITECH PROJECT, 2019
** my_sokoban.h
** File description:
** my_sokoban.h
*/

#ifndef __MY_SOKOBAN_H__
#define __MY_SOKOBAN_H__

#include <curses.h>

char *open_read_file(char const *filepath);
int get_nb_rows(char *buffer);
int get_nb_cols(char *buffer);
char **malloc_2d_array(char *buffer);
int my_popup(char *buffer, char **map, char **saved_map, int nb_rows);
char **my_sokoban(char const *filepath);
int display_array(char **array, int nb_rows);
char **fill_tab(char **tab, char *buffer);
int error_management(int ac, char **av);
void usages(void);
char **move_left(char **map, int nb_rows, char **saved_map);
char **move_right(char **map, int nb_rows, char **saved_map);
char **move_up(char **map, int nb_rows, char **saved_map);
char **move_down(char **map, int nb_rows, char **saved_map);
char **move_management(int input, char **map, int nb_rows, char **saved_map);
void left_management(char **map, int pi, int pj, char **saved_map);
void right_management(char **map, int pi, int pj, char **saved_map);
void down_management(char **map, int pi, int pj, char **saved_map);
void up_management(char **map, int pi, int pj, char **saved_map);
int check_end_game_victory(char **map, char **saved_map, int nb_rows);
int check_end_game_defeat(char *buffer, char **map);
int end_management(char *buffer, char **map, char **saved_map, int nb_rows);
int reset_game(char **map, char **saved_map, int nb_rows);
void display(char **map, char *buffer);

#endif /*__MY_SOKOBAN_H__*/
