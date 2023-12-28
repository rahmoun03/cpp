NAME = Form

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++


SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp


all : $(NAME)

$(NAME) : $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $@

clean : 
	@rm -rf $(NAME)

fclean : clean
	@rm -rf *_shrubbery
re : fclean all