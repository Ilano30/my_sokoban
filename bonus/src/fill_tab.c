/*
** EPITECH PROJECT, 2019
** fill_tab.c
** File description:
** fill_tab.c
*/

#include "my.h"
#include "my_sokoban.h"

char **fill_tab(char **tab, char *buffer)
{
    int i = 0;
    int j = 0;
    int idx = 0;

    while (buffer[idx] != '\0') {
        if (buffer[idx] == '\n') {
            tab[i][j] = buffer[idx];
            i++;
            j = 0;
        }
        else {
            tab[i][j] = buffer[idx];
            j++;
        }
        idx++;
    }
    return (tab);
}
