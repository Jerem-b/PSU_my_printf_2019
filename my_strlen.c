/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** return the length of a string
*/

int my_strlen(char const *str)
{
    int i;
    i = 0;

    while (*str != '\0') {
        i += 1;
        str += 1;
    }
    return (i);
}
