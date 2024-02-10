# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 15:35:56 by arahmoun          #+#    #+#              #
#    Updated: 2024/02/10 10:55:40 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC = main.cpp PmergeMe.cpp vectorSort.cpp listSort.cpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

${NAME} : $(SRC)
	@c++ ${CXXFLAGS} ${SRC} -o $(NAME)
	@tput setaf 2; echo "executable file is ready"; tput setaf 7

all : ${NAME}

fclean : clean

clean :
	@rm -rf $(NAME)
	@tput setaf 1; echo "Clean" ;tput setaf 7

re : fclean all
