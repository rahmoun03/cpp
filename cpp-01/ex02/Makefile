# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 20:03:18 by arahmoun          #+#    #+#              #
#    Updated: 2023/10/14 20:04:31 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

NAME = Zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

all : $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(FLAGS) $(SRC) -o $@

clean :
	@rm -f $(NAME)

fclean : clean

re: fclean all
