# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 16:00:44 by arahmoun          #+#    #+#              #
#    Updated: 2024/01/26 13:27:34 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRC = main.cpp BitcoinExchange.cpp

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