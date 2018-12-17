# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: averemiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/14 21:00:23 by averemiy          #+#    #+#              #
#    Updated: 2018/05/15 05:39:45 by averemiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = averemiy.filler

FLAGS = -Wall -Werror -Wextra

LIB = ./libft/libft.a

OBJ = ./find_best_coord.o ./find_distance.o ./find_player.o ./get_next_line.o \
	  ./main.o ./parser.o ./push_in_map.o 

SRC = ./find_best_coord.c ./find_distance.c ./find_player.c ./get_next_line.c \
	  ./main.c ./parser.c ./push_in_map.c

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./libft/
	gcc $(FLAGS) $(SRC) $(LIB) -o $(NAME)

clean :
	make -C ./libft/ clean
	rm -rf $(OBJ)

fclean : clean
	make -C ./libft/ fclean
	rm -rf $(NAME)

re : fclean all
