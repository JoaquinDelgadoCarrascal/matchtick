/*
** EPITECH PROJECT, 2020
** create_map
** File description:
** create the map
*/

#include "matchstick.h"

int create_pyramid(game_t *game)
{
    int i = 0;
    int nbr_spaces = (game->columns - 1) / 2;
    int nbr_sticks = 1;
    game->map = malloc(sizeof(char *) * (game->nbr_lines + 1));

    if (!game->map)
        return (84);
    while (i < game->nbr_lines) {
        game->map[i] = malloc(sizeof(char) * (game->columns + 1));
        add_map_content(nbr_spaces, ' ', game->map[i], 0);
        add_map_content(nbr_sticks, '|', game->map[i], nbr_spaces);
        add_map_content(nbr_spaces, ' ', game->map[i], FINAL);
        game->map[i][game->columns] = '\0';
        nbr_spaces--;
        nbr_sticks += 2;
        i++;
    }
    game->map[i] = NULL;
    return (0);
}