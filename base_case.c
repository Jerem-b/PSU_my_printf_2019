/*
** EPITECH PROJECT, 2019
** base_case
** File description:
** bases functions of printf
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

int base_case(char *str, va_list ap, int i)
{
    switch (str[i]) {
    case 'o':
        my_putstr(base(str, ap, 8));
        break;
    case 'x':
        my_putstr(lower_case_base(str, ap, 16));
        break;
    case 'X':
        my_putstr(base(str, ap, 16));
        break;
    case 'b':
        my_putstr(base(str, ap, 2));
    }
}
