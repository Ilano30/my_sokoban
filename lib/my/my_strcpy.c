/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** Day 06 : Copy a string into anoter.
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
