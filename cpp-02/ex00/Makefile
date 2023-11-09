# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 00:40:14 by arahmoun          #+#    #+#              #
#    Updated: 2023/10/30 18:12:00 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

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