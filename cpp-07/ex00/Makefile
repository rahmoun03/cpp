NAME = Templates

SRC = main.cpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

${NAME} : $(SRC)
	@c++ ${CXXFLAGS} ${SRC} -o $(NAME)
	@tput setaf 2; echo "executable file is ready"
	
all : ${NAME}

fclean : clean

clean :
	@rm -rf $(NAME)
	@tput setaf 1; echo "Clean"
	
re : fclean all