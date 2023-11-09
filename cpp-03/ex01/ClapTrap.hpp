#ifndef CLAPTRAP_HPP
#define CALPTRAP_HPP

# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YOLLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define E6 "\033[0;36m"
# define DEF "\033[0m"

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(); // default 
        ClapTrap(std::string arg); // para
        ~ClapTrap(); // destructor
        ClapTrap(const ClapTrap& other); // copy constructor
        ClapTrap& operator=(const ClapTrap& other); // copy assignment operator
        
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};



#endif