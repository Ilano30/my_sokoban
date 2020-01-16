/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** Day 04 : Swap the content of two integers.
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}
