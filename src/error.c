/*
** EPITECH PROJECT, 2019
** error.c
** File description:
** error.c
*/

#include "my.h"
#include "my_sokoban.h"
#include <errno.h>

int number_arguments_error(int ac)
{
    if (ac != 2) {
        my_putstr("Error : Invalid number of argument !\n");
        return (-1);
    }
    return (0);
}

int not_file_error(char const *filepath)
{
    if (open(filepath, O_RDONLY) == -1) {
        if (errno == ENOENT) {
            my_putstr("Error : ");
            my_putstr(filepath);
            my_putstr(" : no such file or directory !\n");
            return (-1);
        }
    }
    return (0);
}

int open_read_close_error(char const *filepath)
{
    if (open_read_file(filepath) == NULL)
        return (-1);
    return (0);
}

int invalid_map_error(char const *filepath)
{
    char *buffer;
    int i = 0;
    int p = 0;

    buffer = open_read_file(filepath);
    for (i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] != ' ' && buffer[i] != '\n' && buffer[i] != '#' &&
            buffer[i] != 'X' && buffer[i] != 'P' && buffer[i] != 'O') {
            my_putstr("Error : Invalid Map !\n");
            return (-1);
        }
    for (i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == 'P')
            p++;
    if (p != 1) {
        my_putstr("Error : Where is P ?\n");
        return (-1);
    }
    return (0);
}

int error_management(int ac, char **av)
{
    if (number_arguments_error(ac) == -1)
        return (84);
    if (not_file_error(av[1]) == -1)
        return (84);
    if (open_read_close_error(av[1]) == -1)
        return (84);
    if (invalid_map_error(av[1]) == -1)
        return (84);
    return (0);
}
