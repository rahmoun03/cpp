# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 17:30:24 by arahmoun          #+#    #+#              #
#    Updated: 2023/10/08 11:43:00 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRC = main.cpp PhoneBook.cpp Contact.cpp

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