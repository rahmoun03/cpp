#include "ScavTrap.hpp"
ScavTrap::ScavTrap(){

}

void ScavTrap::guardGate(){
    std::cout << E6 << "ScavTrap " <<DEF << "name" << " is now in Gatekeeper mode!" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << E6 << "ScavTrap "<< GREEN << Name << " is created " << DEF << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << E6 <<"ScavTrap "<< GREEN << " name " << " is destroyed !" << DEF << std::endl;
}
