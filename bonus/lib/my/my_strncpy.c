/*
** EPITECH PROJECT, 2019
** my_strncpy.c
** File description:
** Day 06 : Copy n characters from a string into another.
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > i)
        dest[i] = '\0';
    return (dest);
}
