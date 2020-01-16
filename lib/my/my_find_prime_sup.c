/*
** EPITECH PROJECT, 2019
** my_find_prime_sup.c
** File description:
** Day 05 : my_find_prime_sup.c
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb < 2)
        return (0);
    if (nb == 2)
        return (nb);
    else {
        for (int i = 3; i * i <= nb; i++)
            if (nb % i == 0)
                return (my_find_prime_sup(nb + 1));
    }
    return (nb);
}
