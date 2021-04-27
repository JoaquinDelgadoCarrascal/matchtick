/*
** EPITECH PROJECT, 2021
** is_game_finished
** File description:
** checks if the game is finished
*/

#include "matchstick.h"

bool is_game_finished(char **map)
{
    int j = 0;
    int i = 0;

    while (map[j]) {
        while (map[j][i]) {
            if (map[j][i] == '|')
                return (false);
            else
                i++;
        }
        j++;
        i = 0;
    }
    return (true);
}