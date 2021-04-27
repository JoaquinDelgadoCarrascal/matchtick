/*
** EPITECH PROJECT, 2020
** matchstick.h
** File description:
** prototypes of all the functions
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

#define FINAL (nbr_spaces + nbr_sticks)

typedef struct action_s {
    int stick;
    int line;
    int num_return;
    int sticks_now;
    int sticks_removed;
} action_t;

typedef struct game_s {
    action_t *ac;
    char **map;
    int max_sticks;
    int nbr_lines;
    int columns;
} game_t;

int error_handling(int ac, char **av);
int execute_game(char **av);
int create_pyramid(game_t *game);
void add_map_content(int nbr_characters, char c, char *map_line, int j);
int get_prompt_usr(game_t *game);
void print_map(game_t *game);
int main_loop(game_t *game);
void remove_sticks(game_t *game);
void do_ai_turn(game_t *game);
void print_ai(int sticks_removed, int line);
void print_player(int sticks_removed, int line);
int count_line_sticks(char **map, int j);
bool check_error_match(game_t *game);
bool check_error_line(game_t *game);
bool is_game_finished(char **map);
void do_free_array(char **array);

#endif