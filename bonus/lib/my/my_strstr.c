/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** Day 06 : my_strstr function.
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i;

    if (str[0] != '\0') {
        i = 0;
        while (to_find[i] != '\0') {
            if (to_find[i] != str[i])
                return (my_strstr(str + 1, to_find));
            i++;
        }
        return (str);
    }
    else
        return (0);
}
