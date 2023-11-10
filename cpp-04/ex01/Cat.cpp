#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat : Default constructor called" <<std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat : copy constructor called" <<std::endl;
    *this = other;
    brain = new Brain(*(other.brain));
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat : copy assignment operator called" <<std::endl;
    if(this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

Cat::Cat(std::string name)
{
    std::cout << "Cat : parametrized constructor called" <<std::endl;
    type = name;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat : destructor called !" <<std::endl;
}

void Cat::makeSound()const{
    std::cout<<"meow meow"<<std::endl;
}

Brain* Cat::getBrain(){
    return brain;
}