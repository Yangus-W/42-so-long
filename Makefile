# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yawang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/07 17:44:42 by yawang            #+#    #+#              #
#    Updated: 2024/08/08 18:36:21 by yawang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c
		
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = cc
NAME = main.a
INCLUDES = -I/usr/include -Imlx

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

all: $(NAME)

MLX_FLAGS = -Lmlx -lmlx -L/usr/lib/X11 -lXext -lX11

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX_FLAGS)
	
clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus