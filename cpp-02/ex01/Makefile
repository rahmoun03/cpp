# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 18:38:58 by arahmoun          #+#    #+#              #
#    Updated: 2023/10/30 18:39:15 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Fixed.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

CPP = c++

all : $(NAME)

$(NAME) : $(SRC)
	$(CPP) $(FLAGS) $(SRC) -o $@

clean :
	rm -rf $(NAME)

fclean :clean

re :fclean all