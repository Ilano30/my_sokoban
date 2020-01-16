/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** Day 06 : Check if the string only contains numerical characters.
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
        i++;
    }
    return (1);
}
