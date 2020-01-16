/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** Day 07 : Concatenate n characters of two strings.
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = 0;
    int i = 0;

    len = my_strlen(dest);
    while (i != nb) {
        dest[len] = src[i];
        len++;
        i++;
    }
    dest[len] = '\0';
    return (dest);
}
