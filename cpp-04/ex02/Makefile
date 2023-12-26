NAME = Animal

SRC = main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

CPP = c++

all : $(NAME)

$(NAME) : $(SRC)
	$(CPP) $(FLAGS) $(SRC) -o $@

clean :
	rm -rf $(NAME)

fclean :clean

re :fclean all