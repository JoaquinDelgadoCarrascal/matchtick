/*
** EPITECH PROJECT, 2020
** utils.h
** File description:
** prototypes of all the functions
*/

#ifndef UTILS_H_
#define UTILS_H_

#include <stdbool.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_strcmp(char const *n1, char const *n2);
int my_strlen(char const *str);
char *my_strdup(char const *src);
int my_getnbr(char const *str);
char **my_str_to_word_array(char *str);
bool is_integer(char *str, char c);
void my_print_array(char **array);
int my_put_nbr(int nb);

#endif