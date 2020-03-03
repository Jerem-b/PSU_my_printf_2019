/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse a string
*/

#include <string.h>

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int start;
    int stop;
    char c;

    stop = my_strlen(str) - 1;
    start = 0;

    while (start <= stop) {
        c = str[start];
        str[start] = str[stop];
        str[stop] = c;
        stop -= 1;
        start += 1;
    }
    return (str);
}
