/*
** EPITECH PROJECT, 2020
** count_sticks
** File description:
** counts the actual sticks in the current line
*/

#include "matchstick.h"

int count_line_sticks(char **map, int j)
{
    int i = 0;
    int counter = 0;

    while (map[j][i]) {
        if (map[j][i] == '|')
            counter++;
        i++;
    }
    return (counter);

}