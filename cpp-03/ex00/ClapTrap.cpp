#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(0)//         default constructor 
{
    std::cout << "ClapTrap " << "default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string arg) : name(arg), hitPoints(10), energyPoints(10), attackDamage(0) { // parameterize constructor
    std::cout << "ClapTrap " << GREEN << name << " is born!" << DEF << std::endl;
}

ClapTrap::~ClapTrap() //                                                destructor 
{
    std::cout << "ClapTrap " << RED << name << " is destroyed!" << DEF << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {//                                copy constructor
    std::cout << "ClapTrap " <<"Copy constructor called" <<std::endl;
    *this = other;   
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){//                         assignment operator
    std::cout << "ClapTrap Copy assignment operator called" <<std::endl;
    if(this != &other){
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        std::cout << "ClapTrap " << BLUE <<name<< DEF << " attacks " << BLUE <<target<< DEF << ", causing " << BLUE <<attackDamage<< DEF << " points of damage!" << std::endl;
        energyPoints--;
    } 
    else if(energyPoints <= 0) {
        std::cout << "ClapTrap " << BLUE <<name<< DEF << " has no energy points left and can't attack!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << BLUE <<name<< DEF << " has no hit points left and can't attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints -= amount;
        std::cout << "ClapTrap " << BLUE <<name<< DEF << " takes " << BLUE <<amount<< DEF << " points of damage!" << std::endl;
        if (hitPoints <= 0) {
            hitPoints = 0;
            std::cout << "ClapTrap " << YOLLOW <<name<< DEF << " is dead!" << std::endl;
        }
    } 
    else {
        std::cout << "ClapTrap " << BLUE <<name<< DEF << " is already dead!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints < 10 && hitPoints > 0) {
        if (energyPoints > 0)
        {
            hitPoints += amount;
            energyPoints--;
            if (hitPoints > 10) {
                hitPoints = 10;
            }
            std::cout << "ClapTrap " << BLUE <<name<< DEF << " is repaired and gains " << BLUE <<amount<< DEF << " hit points!" << std::endl;
        }
        else
            std::cout << "ClapTrap " << BLUE <<name<< DEF << " has no energy points left and can't repaired !" << std::endl;
    }
    else if(hitPoints <= 0){
            std::cout << "ClapTrap " << YOLLOW <<name<< DEF << " is already dead !" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << BLUE <<name<< DEF << " is already at full health!" << std::endl;
    }
}
