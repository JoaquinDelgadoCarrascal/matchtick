/*
** EPITECH PROJECT, 2020
** error_handling
** File description:
** handles the error
*/

#include "matchstick.h"

int error_handling(int ac, char **av)
{
    if (ac != 3)
        return (84);
    if (is_integer(av[1], '\0') == false || is_integer(av[2], '\0') == false) {
        my_putstr("Error: expected unsigned integer\n");
        return (84);
    }
    if (my_getnbr(av[1]) >= 100 || my_getnbr(av[1]) <= 1) {
        my_putstr("Error: number of lines out of range (1 < n < 100)\n");
        return (84);
    }
    return (0);
}