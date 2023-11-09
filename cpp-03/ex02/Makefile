NAME = Trap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CPP = c++

all : $(NAME)

$(NAME) : $(SRC)
	$(CPP) $(FLAGS) $(SRC) -o $@

clean :
	rm -rf $(NAME)

fclean :clean

re :fclean all