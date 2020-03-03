/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display the number given as parameter
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb < 10)
        my_putchar(nb + '0');
    else if (nb > 9){
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return nb;
}
