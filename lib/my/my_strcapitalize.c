/*
** EPITECH PROJECT, 2019
** my_strcapitalize.c
** File description:
** Day 06 : Capitalize the first letter of each word.
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    while (str[j] != '\0') {
        if ((str[j] >= 'a' && str[j] <= 'z') &&
            !((str[j - 1] >= 'a' && str[j - 1] <= 'z') ||
                (str[j - 1] >= 'A' && str[j - 1] <= 'Z') ||
                (str[j - 1] >= '0' && str[j - 1] <= '9')))
            str[j] -= 32;
        j++;
    }
    return (str);
}
