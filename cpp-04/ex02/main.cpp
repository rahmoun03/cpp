#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Test for deep copy in copy constructor and copy assignment
    Dog dog1;
    dog1.makeSound();
    dog1.getBrain()->setIdea(0, "Fetch the ball");
    dog1.getBrain()->displayIdeas();

    Dog dog2(dog1);

    dog2.getBrain()->displayIdeas();
    std::cout <<dog1.getBrain() << std::endl << dog2.getBrain() <<std::endl; 
    // Create and fill an array of Animal objects
    const int arraySize = 4;
    AAnimal* animalArray[arraySize];
    animalArray[0] = new Dog();
    animalArray[1] = new Dog();
    animalArray[2] = new Cat();
    animalArray[3] = new Cat();

    std::cout<<std::endl << "-----   free the memory  ------"<<std::endl <<std::endl;
    // Delete every Animal in the array
    for (int index = 0; index < arraySize; index++) {
        delete animalArray[index];
    }

    return 0;
}







