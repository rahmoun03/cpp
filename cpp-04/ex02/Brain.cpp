#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" <<std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" <<std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called" <<std::endl;
    if(this != &other)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called !" <<std::endl;
}

void Brain::setIdea(int index, const std::string idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}

void Brain::displayIdeas(){
    for (int i = 0; i < 100; i++) {
        std::cout << "Idea " << i + 1 << ": " << ideas[i] << std::endl;
    }
}
