/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my_printf_lib
*/

#include "stdarg.h"

char *base(char *, va_list, int);
int base_case(char *, va_list, int);
int get_address(long);
char *lower_case_base(char *, va_list, int);
int my_printf(char *, ...);
int othercase(char *, va_list, int);
char *uppercase(char *);
void my_putchar(char);
int my_putstr(char const *);
char *my_revstr(char *);
int my_strlen(char const *);
int my_put_nbr(int);
int easy_case(char *, va_list, int);
