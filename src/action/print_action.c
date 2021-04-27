/*
** EPITECH PROJECT, 2020
** print_action
** File description:
** prints of the game
*/

#include "matchstick.h"

void print_player(int sticks_removed, int line)
{
    my_putstr("Player removed ");
    my_put_nbr(sticks_removed);
    my_putstr(" match(es) from line ");
    my_put_nbr(line + 1);
    my_putchar('\n');
}

void print_ai(int sticks_removed, int line)
{
    my_putstr("AI's turn...\n");
    my_putstr("AI removed ");
    my_put_nbr(sticks_removed);
    my_putstr(" match(es) from line ");
    my_put_nbr(line + 1);
    my_putchar('\n');
}