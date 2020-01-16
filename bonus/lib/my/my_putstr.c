/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** Day 04 : Display the characters of a string.
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}
