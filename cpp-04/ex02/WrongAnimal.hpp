#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();// def constructor
    ~WrongAnimal();// destructor
    WrongAnimal(std::string name);// para constructor
    WrongAnimal(const WrongAnimal& other); // copy constructor
    WrongAnimal& operator=(const WrongAnimal& other);// copy assignment operator
    void makeSound() const;
    const std::string& getType() const;

protected:
    std::string type;
};

#endif