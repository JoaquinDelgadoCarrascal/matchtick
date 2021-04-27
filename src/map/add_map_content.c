/*
** EPITECH PROJECT, 2021
** add_map_content
** File description:
** adds te map content
*/

#include "matchstick.h"

void add_map_content(int nbr_characters, char c, char *map_line, int j)
{
    int i = 0;

    while (i < nbr_characters) {
        map_line[j] = c;
        i++;
        j++;
    }
    map_line[j] = '\0';
}