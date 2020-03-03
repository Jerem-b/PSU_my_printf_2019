/*
** EPITECH PROJECT, 2019
** uppercase
** File description:
** return an uppercase string
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

char *uppercase(char *str)
{
    char *up_str;
    int i = 0;

    up_str = malloc(sizeof(char) * my_strlen(str));
    while (i < my_strlen(str)) {
        up_str[i] = str[i] - 32;
        i++;
    }
    up_str[i] = '\0';

    return up_str;
}
