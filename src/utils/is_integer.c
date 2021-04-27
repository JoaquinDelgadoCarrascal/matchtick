/*
** EPITECH PROJECT, 2020
** is_integer
** File description:
** checks if a string is an integer
*/

#include "matchstick.h"

bool is_integer(char *str, char c)
{
    int i = 0;

    while (str[i] != c) {
        if (str[i] <= '9' && str[i] >= '0')
            i++;
        else
            return (false);
    }
    return (true);
}