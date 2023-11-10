#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
    ~WrongAnimal();
    void makeSound() const;
    const std::string& getType() const;

protected:
    std::string type;
};

#endif