#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << type <<" : Default constructor called" <<std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << type <<" : copy constructor called" <<std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << type <<" : copy assignment operator called" <<std::endl;
    if(this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

Animal::Animal(std::string name)
{
    std::cout << type <<" : parametrized constructor called" <<std::endl;
    type = name;
}

Animal::~Animal()
{
    std::cout << type <<" : destructor called !" <<std::endl;
}

const std::string& Animal::getType() const {
    return type;
}

void Animal::makeSound() const{
    std::cout<<"The animal makes a sound."<<std::endl;
}
