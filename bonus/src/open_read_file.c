/*
** EPITECH PROJECT, 2019
** open_read_file.c
** File description:
** open_read_file.c
*/

#include "my.h"

long file_size(char const *filepath)
{
    struct stat s;

    stat(filepath, &s);
    return (s.st_size);
}

char *open_read_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer;
    int size = file_size(filepath);
    int ret;

    buffer = malloc(sizeof(char) * (size + 1));
    if (fd == -1) {
        my_putstr("Error : Open failed !\n");
        return (NULL);
    }
    ret = read(fd, buffer, size);
    if (ret == -1) {
        my_putstr("Error : Invalid return of read !\n");
        return (NULL);
    }
    buffer[size] = '\0';
    if (close(fd) == -1)
        return (NULL);
    return (buffer);
}
