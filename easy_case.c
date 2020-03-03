/*
** EPITECH PROJECT, 2019
** easy_case
** File description:
** standard case
*/

#include "my.h"

int easy_case(char *str, va_list ap, int i)
{
    switch (str[i]) {
    case  'i':
        my_put_nbr(va_arg(ap, int));
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'c':
        my_putchar((char) va_arg(ap, int));
        break;
    }
    othercase(str, ap, i);
}
