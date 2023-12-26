#include "ScavTrap.hpp"

int main() {
    ScavTrap trap1("youssef");

    trap1.attack("Jack");
    trap1.takeDamage(6);
    trap1.beRepaired(4);
    trap1.takeDamage(3);
    trap1.guardGate();
    trap1.beRepaired(8);
    trap1.takeDamage(17);

    return 0;
}
