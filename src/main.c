/*
** EPITECH PROJECT, 2021
** main
** File description:
** main function
*/

#include "matchstick.h"

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 84)
        return (84);
    return (execute_game(av));
}