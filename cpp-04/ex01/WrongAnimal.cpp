#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {     // def constructor
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name){   // para constructor
    std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){             // copy constructor
    *this = other;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
} 
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)   // copy assignment operator
{
    std::cout << "WrongAnimal copy assignment operator called" <<std::endl;
    if(this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some wrong sound" << std::endl;
}

const std::string& WrongAnimal::getType() const {
    return type;
}
