#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();


    std::cout <<std::endl;
    /*  --------------------------     WrongTest     -------------------------------*/

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongJ = new WrongCat();


    std::cout << wrongJ->getType() << " " << std::endl;
    wrongJ->makeSound(); // will output the WrongCat sound!
    wrongMeta->makeSound();


    std::cout <<std::endl;
    /*   -----------------------------     free the heap     ----------------------------   */
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongJ;

    return 0;
}
