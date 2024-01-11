NAME = Serializer

SRC = Serializer.cpp main.cpp

CXXFLAGS = -Wall -Wextra -Werror

${NAME} : $(SRC)
	@c++ ${CFLAGS} ${SRC} -o Serializer
	@tput setaf 2; echo "executable file is ready"
	
all : ${NAME}

fclean : clean

clean :
	@rm -rf Serializer
	@tput setaf 1; echo "Clean"
	
re : fclean all