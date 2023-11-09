#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
    std::cout << "FragTrap " << Name << " is created with enthusiasm!" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " is destroyed with a bang!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a high five from the guys!" << std::endl;
}
