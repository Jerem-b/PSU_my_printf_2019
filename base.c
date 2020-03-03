/*
** EPITECH PROJECT, 2019
** base
** File description:
** return an str with any base
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

char *base(char *str, va_list ap, int base)
{
    char *result;
    int rest;
    int nbr = va_arg(ap, int);

    result = malloc(sizeof(char) * my_strlen(str));

    for (int i = 0; nbr > 0; i++) {
        rest = nbr % base;
        nbr = nbr / base;
        if (rest > 9)
            result[i] = rest - 10 + 'A';
        else
            result[i] = rest + 48;
    }

    result = my_revstr(result);
    return result;
}
