/*
** EPITECH PROJECT, 2020
** game_handling
** File description:
** handles the game
*/

#include "matchstick.h"

bool check_error_line(game_t *game)
{
    int sticks = 0;

    if (game->ac->line == 0) {
        sticks = count_line_sticks(game->map, game->ac->line);
    } else if (game->ac->line <= game->nbr_lines){
        sticks = count_line_sticks(game->map, game->ac->line - 1);
    }
    if (game->ac->line > game->nbr_lines || game->ac->line < 1) {
        my_putstr("Error: this line is out of range\n");
        return (true);
    }
    if (sticks == 0) {
        my_putstr("Error: not enough matches on this line\n");
        return (true);
    }
    return (false);
}

bool check_error_match(game_t *game)
{
    int sticks = count_line_sticks(game->map, game->ac->line - 1);

    if (game->ac->stick > sticks) {
        my_putstr("Error: not enough matches on this line\n");
        return (true);
    }
    if (game->ac->stick == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (true);
    }
    if (game->ac->stick > game->max_sticks) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(game->max_sticks);
        my_putstr(" matches per turn\n");
        return (true);
    }
    if (game->ac->stick < 1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (true);
    }
    return (false);
}