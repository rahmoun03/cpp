#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap();
    public:
        FragTrap(std::string Name);
        ~FragTrap();

        void highFivesGuys();
};



#endif
