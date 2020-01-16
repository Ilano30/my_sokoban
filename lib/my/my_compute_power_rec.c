/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** Day 05 : Compute Power with recursive function
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    return (nb * my_compute_power_rec(nb, p - 1));
}
