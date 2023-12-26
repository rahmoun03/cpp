#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
    std::cout <<"AAnimal  Default constructor called" <<std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout <<"AAnimal copy constructor called" <<std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal copy assignment operator called" <<std::endl;
    if(this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

AAnimal::AAnimal(std::string name)
{
    std::cout <<"AAnimal parametrized constructor called" <<std::endl;
    type = name;
}

AAnimal::~AAnimal()
{
    std::cout <<"AAnimal destructor called !" <<std::endl;
}

const std::string& AAnimal::getType() const {
    return type;
}

void AAnimal::makeSound() const{}
