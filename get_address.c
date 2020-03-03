/*
** EPITECH PROJECT, 2019
** get_address
** File description:
** get address of a pointer
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

int get_address(long nbr)
{
    char *result;
    int rest;

    result = malloc(sizeof(char) * 40000);

    for (int i = 0; nbr > 0; i++) {
        rest = nbr % 16;
        nbr /= 16;
        if (rest > 9)
            result[i] = rest - 10 + 'a';
        else
            result[i] = rest + 48;
    }
    result = my_revstr(result);
    my_putstr("0x");
    my_putstr(result);
}
