/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** Day 05 : Compute Square Root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int result = 0;
    int a = 0;

    if (nb < 0)
        return (0);
    if (nb == 1)
        return (1);
    while (result <= nb) {
        result++;
        a = result * result;
        if (a == nb)
            return (result);
    }
    return (0);
}
