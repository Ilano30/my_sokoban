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
    my_putstr(" 'O' for storage locations.\n\n");
    my_putstr("GOALS\n");
    my_putstr("          Place boxes on all storage locations ");
    my_putstr("without stucking them !\n");
    my_putstr("HOW TO PLAY\n");
    my_putstr("          Use Arrow Keys to move Player.\n");
    my_putstr("          Press E to Main Menu.\n");
    my_putstr("          Press P to Pause Menu.\n");
    my_putstr("          Press SPACE to Reset.\n\n");
}
