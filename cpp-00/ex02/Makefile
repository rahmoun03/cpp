# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 12:20:52 by arahmoun          #+#    #+#              #
#    Updated: 2023/10/08 12:29:59 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= account

SRC = tests.cpp #acount.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all : $(NAME)
	
$(NAME): ${SRC}
	@printf "    - Compiling $(NAME)...\n"
	@ $(CC) $(FLAGS) ${SRC} -o $(NAME)
	@printf "    - Executable ready\n"

clean:
	@$(RM) $(NAME)
	@printf "    - Executable removed\n"

fclean:
	@$(RM) $(NAME)
	@printf "    - Executable removed\n"

re: clean all