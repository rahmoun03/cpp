# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 21:17:14 by arahmoun          #+#    #+#              #
#    Updated: 2023/10/14 21:19:00 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

NAME = output

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

all : $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(FLAGS) $(SRC) -o $@

clean :
	@rm -f $(NAME)

fclean : clean

re: fclean all
