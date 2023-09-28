# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 13:07:38 by arahmoun          #+#    #+#              #
#    Updated: 2023/09/27 17:26:07 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all : $(NAME)
	
$(NAME):
	@printf "    - Compiling $(NAME)...\n"
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@printf "    - Executable ready\n"

clean:
	@$(RM) $(NAME)
	@printf "    - Executable removed\n"

fclean:
	@$(RM) $(NAME)
	@printf "    - Executable removed\n"

re: clean all