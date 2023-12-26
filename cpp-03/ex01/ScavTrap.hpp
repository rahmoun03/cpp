#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();  // default constructor
        ScavTrap(std::string Name); // para constructor
        ScavTrap(const ScavTrap& other); // copy constructor
        ScavTrap& operator=(const ScavTrap& other); // copy assignment operator
        ~ScavTrap(); // destructor

        void guardGate();
        void attack(const std::string& target);
};

#endif
