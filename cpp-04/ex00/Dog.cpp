#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" <<std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" <<std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" <<std::endl;
    if(this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

Dog::Dog(std::string name)
{
    std::cout << "Dog parametrized constructor called" <<std::endl;
    type = name;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called !" <<std::endl;
}

void Dog::makeSound() const{
    std::cout<<"how how "<<std::endl;
}