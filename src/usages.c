/*
** EPITECH PROJECT, 2019
** usages.c
** File description:
** usages.c
*/

#include "my.h"

void usages(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map  file representing the warehouse map, ");
    my_putstr("containing '#' for walls,\n");
    my_putstr("          'P' for the player, 'X' for boxes and");
    my_putstr(" 'O' for storage locations.\n");
}
