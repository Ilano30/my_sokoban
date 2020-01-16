/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** Day 07 : Concatenate two strings.
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int len = 0;
    int i = 0;

    len = my_strlen(dest);
    while (src[i] != '\0') {
        dest[len] = src[i];
        len++;
        i++;
    }
    dest[len] = '\0';
    return (dest);
}
