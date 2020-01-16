/*
** EPITECH PROJECT, 2019
** my_str_isalpha.c
** File description:
** Day 06 : Check if the string only contains alphabetical characters.
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}
