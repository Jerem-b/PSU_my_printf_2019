/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** printf function
*/

#include <stdarg.h>
#include "my.h"
#include <stdlib.h>

int my_printf(char *str, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, str);

    while (str[i] != '\0') {
        if (str[i] == '%') {
            easy_case(str, ap, i + 1);
            i++;
        }
        else
            my_putchar(str[i]);
        i++;
    }
    va_end(ap);
}
