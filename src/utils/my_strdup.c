/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** allocates memory for string and copy the one given as argument on it
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int lenght = my_strlen(src);
    char *str = NULL;
    int i = 0;

    str = malloc(sizeof(char) * lenght);
    if (str == NULL)
        return (NULL);
    while (i < lenght) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
