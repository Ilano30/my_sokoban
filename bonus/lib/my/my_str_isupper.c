/*
** EPITECH PROJECT, 2019
** my_str_isupper.c
** File description:
** Day 06 : Check if the string only contains uppercase alpha characters.
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 90)
            return (0);
        i++;
    }
    return (1);
}
