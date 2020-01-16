/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** Day 06 : Reverse a string.
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = -1;
    int j = 0;
    char c;

    while (str[j] != '\0')
        j++;
    while (++i < --j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    return (str);
}
