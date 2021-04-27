/*
** EPITECH PROJECT, 2020
** do_free
** File description:
** do every free
*/

#include "matchstick.h"

void do_free_array(char **array)
{
    int i = 0;

    while (array[i]) {
        free(array[i]);
        i++;
    }
    free(array);
}