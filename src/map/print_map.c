/*
** EPITECH PROJECT, 2021
** print_pyramid
** File description:
** prints the pyramid
*/

#include "matchstick.h"

void print_map(game_t *game)
{
    int i = 0;
    int j = 0;

    while (j < (game->columns + 2)) {
        my_putchar('*');
        j++;
    }
    j = 0;
    my_putchar('\n');
    while (game->map[i] != NULL) {
        my_putchar('*');
        my_putstr(game->map[i]);
        my_putstr("*\n");
        i++;
    }
    while (j < (game->columns + 2)) {
        my_putchar('*');
        j++;
    }
    my_putchar('\n');
}