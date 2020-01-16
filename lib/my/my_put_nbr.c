/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** Day 03 : Display the number given as a parameter.
*/

#include "my.h"

int my_put_nbr_function(long nb)
{
    int i = 0;

    if (nb >= 10) {
        i = nb % 10;
        nb = (nb - i) / 10;
        my_put_nbr_function(nb);
        my_putchar(i + 48);
    }
    else if (nb < 10)
        my_putchar(nb + 48);
    return (0);
}

int my_put_nbr(int nb)
{
    long N = nb;

    if (nb < 0) {
        my_putchar('-');
        N = N * -1;
        my_put_nbr_function(N);
    }
    else
        my_put_nbr_function(N);
    return (0);
}
