#include "ScavTrap.hpp"

int main() {
    ScavTrap claptrap1("Alice");
    ScavTrap claptrap2("Bob");

    claptrap1.attack("Bob");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);
    claptrap1.attack("Bob");
    claptrap1.attack("Bob");
    claptrap2.takeDamage(15);
    claptrap2.beRepaired(15);

    return 0;
}
