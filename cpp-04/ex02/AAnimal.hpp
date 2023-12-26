#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal(); // default
        AAnimal(std::string name);
        AAnimal(const AAnimal& other); // copy constructor
        AAnimal& operator=(const AAnimal& other);// copy assignment operator
        virtual ~AAnimal(); // destructor
        virtual void makeSound() const = 0; // pure virtual func
        const std::string& getType() const;
};




#endif