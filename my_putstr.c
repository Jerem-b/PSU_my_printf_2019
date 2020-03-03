/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** give a string with a pointer
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (i < my_strlen(str)) {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}
