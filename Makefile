##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## principal Makefile
##

NAME		=	matchstick

SRC_PATH	=	src/

SRC_PATH_MP	=	src/map/

SRC_PATH_U	=	src/utils/

SRC_PATH_H	=	src/handling/

SRC_PATH_A	=	src/action/

SRC			=	main.c						\
				execute_game.c				\
				main_loop.c					\
				is_game_finished.c			\
				do_free.c					\

SRC_MP		=	add_map_content.c			\
				create_pyramid.c			\
				print_map.c					\
				count_sticks.c				\

SRC_A		=	prompt.c					\
				do_action.c					\
				print_action.c				\

SRC_H		=	error_handling.c			\
				game_handling.c				\

SRC_U		=	my_putchar.c				\
				my_putstr.c					\
				my_put_nbr.c				\
				my_strcmp.c					\
				my_strlen.c					\
				my_strdup.c					\
				my_getnbr.c					\
				my_print_array.c			\
				is_integer.c				\

SRCS		+=	$(addprefix $(SRC_PATH), $(SRC)) $(addprefix $(SRC_PATH_U), $(SRC_U))
SRCS		+=	$(addprefix $(SRC_PATH_MP), $(SRC_MP)) $(addprefix $(SRC_PATH_H), $(SRC_H))
SRCS		+=	$(addprefix $(SRC_PATH_A), $(SRC_A))

OBJ			=	$(SRCS:.c=.o)

RM			=	rm -f

TRASH		=	*~ vgcore*

CFLAGS		+=	-I./include/ -g3 -pedantic -W -Wall -Wextra -Wpedantic -Wno-long-long

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		$(RM) $(OBJ) $(TRASH)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all