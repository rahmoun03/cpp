#include "FragTrap.hpp"

int	main( void )
{
	{
		FragTrap fr4gtp("youssef");

		fr4gtp.attack("Jack");
		fr4gtp.takeDamage(6);
		fr4gtp.beRepaired(4);
		fr4gtp.takeDamage(3);
		fr4gtp.highFivesGuys();
		fr4gtp.beRepaired(8);
		fr4gtp.takeDamage(17);
	}
}