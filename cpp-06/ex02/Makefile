NAME = exec

SRC = Base.cpp A.cpp B.cpp C.cpp main.cpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

${NAME} : $(SRC)
	@c++ ${CFLAGS} ${SRC} -o exec
	@tput setaf 2; echo "executable file is ready"
	
all : ${NAME}

fclean : clean

clean :
	@rm -rf exec
	@tput setaf 1; echo "Clean"
	
re : fclean all