NAME = Form

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRCS = main.cpp Bureaucrat.cpp Form.cpp


all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $@

clean : 
	rm -rf $(NAME)

fclean : clean

re : fclean all