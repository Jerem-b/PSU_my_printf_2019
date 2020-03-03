/*
** EPITECH PROJECT, 2019
** othercase
** File description:
** othercase of printf
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

int othercase(char *str, va_list ap, int i)
{
    switch (str[i]) {
    case 'd':
        my_put_nbr(va_arg(ap, int));
        break;
    case 'u':
        my_put_nbr(va_arg(ap, unsigned int));
        break;
    case 'p':
        get_address(va_arg(ap, void *));
        break;
    case 'S':
        my_putstr(uppercase(va_arg(ap, char *)));
        break;
    case ' ':
        my_putchar(' ');
    }
    base_case(str, ap, i);
}
