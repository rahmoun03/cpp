#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        ScavTrap();
    public:
        ScavTrap(std::string Name);
        ~ScavTrap();

        void guardGate();
};

#endif
