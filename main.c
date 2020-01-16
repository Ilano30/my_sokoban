/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "my.h"
#include "my_sokoban.h"

char **create_map(char *buffer)
{
    char **map;

    map = malloc_2d_array(buffer);
    fill_tab(map, buffer);
    return (map);
}

int end_game_case(char *buffer, char **map, char **saved_map)
{
    int end = -1;
    int nb_rows = get_nb_rows(buffer);

    end = my_popup(buffer, map, saved_map, nb_rows);
    return (end);
}

int main(int ac, char **av)
{
    char *buffer;
    char **map;
    char **saved_map;
    int end = 0;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        usages();
    else if (error_management(ac, av) == 84)
        return (84);
    else {
        buffer = open_read_file(av[1]);
        map = create_map(buffer);
        saved_map = create_map(buffer);
        end = end_game_case(buffer, map, saved_map);
    }
    free(buffer);
    free(map);
    free(saved_map);
    return (end);
}
