# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 22:33:48 by arahmoun          #+#    #+#              #
#    Updated: 2023/10/14 18:06:01 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp zombieHorde.cpp Zombie.cpp

NAME = Zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

all : $(NAME)

$(NAME): $(SRC)
	$(CPP) $(FLAGS) $(SRC) -o $@

clean :
	rm -f $(NAME)

fclean : clean

re: fclean all
