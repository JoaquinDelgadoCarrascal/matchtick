/*
** EPITECH PROJECT, 2021
** execute_game
** File description:
** executes the game
*/

#include "matchstick.h"

int execute_game(char **av)
{
    game_t *game = malloc(sizeof(game_t));

    game->ac = malloc(sizeof(action_t));
    if (!game || !game->ac)
        return (84);
    game->nbr_lines = my_getnbr(av[1]);
    game->max_sticks = my_getnbr(av[2]);
    game->columns = ((game->nbr_lines * 2) - 1);
    create_pyramid(game);
    return (main_loop(game));
}