/*
** EPITECH PROJECT, 2020
** do_action
** File description:
** handles the actions of the game
*/

#include "matchstick.h"

void remove_sticks(game_t *game)
{
    int i = 0;
    int j = game->ac->line - 1;
    int sticks_now = count_line_sticks(game->map, j);
    int total_spaces = (game->nbr_lines * 2) - 1;

    if (game->ac->stick <= sticks_now && sticks_now > 0) {
        while (game->map[j][total_spaces - 1] == ' '
        && game->map[j][total_spaces - 1] != '|') {
            total_spaces--;
        }
        while (i < game->ac->stick) {
            game->map[j][total_spaces - 1] = ' ';
            total_spaces--;
            sticks_now--;
            i++;
        }
    }
    print_player(game->ac->stick, j);
}

int do_random_sticks(int j, game_t *game)
{
    int i = 0;

    while (i == 0) {
        if (game->ac->sticks_now == 0) {
            j = rand() % (game->nbr_lines - 1) + 1;
            game->ac->sticks_now = count_line_sticks(game->map, j);
        }
        if (game->ac->sticks_removed > game->ac->sticks_now)
            game->ac->sticks_removed = rand() % (game->max_sticks - 1) + 1;
        if (game->ac->sticks_removed > game->ac->sticks_now)
            continue;
        if (game->ac->sticks_now == 0)
            continue;
        i++;
    }
    return (j);
}

void remove_sticks_ai(game_t *game, int j, int total_spaces)
{
    int i = 0;

    if (game->ac->sticks_now > 0
    && game->ac->sticks_removed <= game->ac->sticks_now) {
        while (game->map[j][total_spaces - 1] == ' '
        && game->map[j][total_spaces - 1] != '|')
            total_spaces--;
        while (i < (game->ac->sticks_removed)) {
            game->map[j][total_spaces - 1] = ' ';
            total_spaces--;
            game->ac->sticks_now--;
            i++;
        }
    }
}

void do_ai_turn(game_t *game)
{
    int j = rand() % (game->nbr_lines - 1) + 1;
    int total_spaces = (game->nbr_lines * 2) - 1;

    game->ac->sticks_now = count_line_sticks(game->map, j);
    game->ac->sticks_removed = rand() % (game->max_sticks - 1) + 1;
    j = do_random_sticks(j, game);
    print_ai(game->ac->sticks_removed, j);
    remove_sticks_ai(game, j, total_spaces);
}