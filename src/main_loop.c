/*
** EPITECH PROJECT, 2021
** main_loop
** File description:
** main loop of the game
*/

#include "matchstick.h"

int is_game_finished_usr(game_t *game)
{
    if (is_game_finished(game->map) == true) {
        print_map(game);
        my_putstr("You lost, too bad...\n");
        return (2);
    }
    return (0);
}

int is_game_finished_ai(game_t *game)
{
    if (is_game_finished(game->map) == true) {
        print_map(game);
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    return (0);
}

int main_loop(game_t *game)
{
    bool ai_turn = false;

    while (true) {
        print_map(game);
        my_putchar('\n');
        if (ai_turn == false) {
            if (get_prompt_usr(game) == 0)
                return (0);
            remove_sticks(game);
            if (is_game_finished_usr(game) == 2)
                return (2);
            ai_turn = true;
        } else {
            do_ai_turn(game);
            if (is_game_finished_ai(game) == 1)
                return (1);
            ai_turn = false;
        }
    }
    return (0);
}