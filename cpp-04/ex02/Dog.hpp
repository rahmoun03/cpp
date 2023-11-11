#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"

class Dog : public AAnimal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(std::string name);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog();
        void makeSound()const;
        Brain* getBrain()const;
};

#endif