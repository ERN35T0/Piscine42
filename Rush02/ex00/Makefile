# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 15:57:09 by ulherrer          #+#    #+#              #
#    Updated: 2022/02/27 22:27:47 by ulherrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
COMPILER = gcc
FLAGS = -Wall -Wextra -Werror
SOURCES = main.c ft_check_args.c ft_save_dic.c
LIB = libft/libft.a
OBJECTS = $(SOURCES:.c=.o)

.PHONY: all clean fclean f re

$(NAME): $(SOURCES)
	cd libft && make re && cd ..
	$(COMPILER) $(FLAGS) $(LIB) $(SOURCES)

all: $(NAME)
clean:
	/bin/rm -rf $(OBJECTS)
fclean: clean
	/bin/rm -rf $(NAME)
f: fclean
re: fclean all
