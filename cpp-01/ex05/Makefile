# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 16:04:51 by arahmoun          #+#    #+#              #
#    Updated: 2023/10/18 16:06:58 by arahmoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp 

NAME = out

FLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

all : $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(FLAGS) $(SRC) -o $@

clean :
	@rm -rf $(NAME)
	@rm -rf	*.replace

fclean : clean

re: fclean all