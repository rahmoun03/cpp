# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 03:51:57 by arahmoun          #+#    #+#              #
#    Updated: 2024/01/23 09:33:08 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutated

SRC = main.cpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

${NAME} : $(SRC)
	@c++ ${CFLAGS} ${SRC} -o $(NAME)
	@tput setaf 2; echo "executable file is ready"
	
all : ${NAME}

fclean : clean

clean :
	@rm -rf $(NAME)
	@tput setaf 1; echo "Clean"
	
re : fclean all