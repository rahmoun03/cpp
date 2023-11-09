#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(); // def
        FragTrap(const FragTrap& other); // copy constructor
        FragTrap& operator=(const FragTrap& other); // copy assignment operator
        FragTrap(std::string Name); // para
        ~FragTrap(); // destructor

        void highFivesGuys();
};



#endif
