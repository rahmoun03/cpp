#include "ScavTrap.hpp"
ScavTrap::ScavTrap() {                  // default 
    std::cout << E6<<"ScavTrap default constructor called" << DEF<< std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) // parameterize
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << E6 << "ScavTrap "<< GREEN << Name << " is created " << DEF << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {  // copy constructor
    std::cout << E6 <<"ScavTrap Copy constructor called" << DEF <<std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){ // copy assignment operator
    std::cout << E6 <<"ScavTrap Copy assignment operator called"<<DEF <<std::endl;
    if(this != &other){
        name = other.name;   
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

void ScavTrap::guardGate(){
    std::cout << E6 << "ScavTrap " <<BLUE<< name << DEF<< " is now in Gatekeeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        std::cout << E6 <<"ScavTrap " << BLUE <<name<< DEF << " attacks " << BLUE <<target<< DEF << ", causing " << BLUE <<attackDamage<< DEF << " points of damage!" << std::endl;
        energyPoints--;
    } 
    else if(energyPoints <= 0) {
        std::cout << E6 <<"ScavTrap " << BLUE <<name<< DEF << " has no energy points left and can't attack!" << std::endl;
    }
    else {
        std::cout << E6 <<"ScavTrap " << BLUE <<name<< DEF << " has no hit points left and can't attack!" << std::endl;
    }
}

ScavTrap::~ScavTrap() // destructor
{
    std::cout << E6 <<"ScavTrap "<< RED << name << " is destroyed !" << DEF << std::endl;
}
