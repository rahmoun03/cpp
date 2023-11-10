#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // Test for deep copy in copy constructor and copy assignment
    Dog dog1;
    dog1.makeSound();
    dog1.getBrain()->setIdea(0, "Fetch the ball");
    Dog dog2 = dog1;
    dog2.getBrain()->displayIdeas();

    delete j; // should not create a leak
    delete i;
    
    // Create and fill an array of Animal objects
    const int arraySize = 4;
    Animal* animalArray[arraySize];
    animalArray[0] = new Dog();
    animalArray[1] = new Dog();
    animalArray[2] = new Cat();
    animalArray[3] = new Cat();

    // Delete every Animal in the array
    for (int index = 0; index < arraySize; ++index) {
        delete animalArray[index];
    }

    // Check for memory leaks

    return 0;
}






