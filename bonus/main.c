/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "my.h"
#include "my_sokoban.h"

int main(int ac, char **av)
{
    int end = 0;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        usages();
    else {
        end = map_loader();
    }
    return (end);
}
