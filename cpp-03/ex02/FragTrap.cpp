#include "FragTrap.hpp"

FragTrap::FragTrap(){                                  // default constructor  
    std::cout << E6 <<"FragTrap default constructor !" << std::endl;
    name = "";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) // copy constructor
{
    std::cout << E6 <<"FragTrap copy constructor !" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other){ // copy assignment operator
    std::cout << E6 <<"FragTrap Copy assignment operator called"<<DEF <<std::endl;
    if(this != &other){
        name = other.name;   
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {    // para constructor
    std::cout << E6 <<"FragTrap "<< GREEN << Name  << " is created with enthusiasm!" <<DEF << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::~FragTrap() {                                         // destructor
    std::cout << E6 <<"FragTrap "<< RED << name  << " is destroyed with a bang!" <<DEF << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << E6 <<"FragTrap " << BLUE << name << DEF << " requests a high five from the guys!" << std::endl;
}
