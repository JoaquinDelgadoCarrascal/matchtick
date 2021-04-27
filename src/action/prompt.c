/*
** EPITECH PROJECT, 2021
** get_prompt
** File description:
** getgets the prompt of the user
*/

#include "matchstick.h"

char *get_input(void)
{
    char *input = NULL;
    size_t len = 0;
    ssize_t size = 0;

    size = getline(&input, &len, stdin);
    if (size == -1) {
        free(input);
        return (NULL);
    }
    return (input);
}

bool check_input(char *name, game_t *game, bool line)
{
    if (is_integer(name, '\n') == false) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (true);
    }
    if (line)
        game->ac->line = my_getnbr(name);
    else
        game->ac->stick = my_getnbr(name);
    return (false);
}

int do_lines(char *lines, game_t *game)
{
    do {
        my_putstr("Line: ");
        lines = get_input();
        if (lines == NULL)
            return (1);
    } while (check_input(lines, game, true) || check_error_line(game));
    return (0);
}

char *do_matches(void)
{
    char *matches = NULL;

    my_putstr("Matches: ");
    matches = get_input();
    if (matches == NULL)
        return (NULL);
    return (matches);
}

int get_prompt_usr(game_t *game)
{
    char *lines = NULL;
    char *matches = NULL;

    my_putstr("Your turn:\n");
    do {
        if (do_lines(lines, game) == 1)
            return (0);
        matches = do_matches();
        if (matches == NULL)
            return (0);
    } while (check_input(matches, game, false) || check_error_match(game));
    free(lines);
    free(matches);
    return (1);
}