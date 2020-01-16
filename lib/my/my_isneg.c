/*
** EPITECH PROJECT, 2019
** my_isneg.c
** File description:
** Day 03 : Is negative or positive ?
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    if (n >= 0)
        my_putchar('P');
    my_putchar('\n');

    return (0);
}
