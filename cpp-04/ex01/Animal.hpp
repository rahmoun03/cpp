#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal(); // default
        Animal(std::string name);
        Animal(const Animal& other); // copy constructor
        Animal& operator=(const Animal& other);// copy assignment operator
        virtual ~Animal(); // destructor
        virtual void makeSound() const;
        const std::string& getType() const;
};




#endif