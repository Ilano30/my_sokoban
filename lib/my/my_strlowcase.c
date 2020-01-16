/*
** EPITECH PROJECT, 2019
** my_strlowcase.c
** File description:
** Day 06 : Put every letter in lowercase.
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
