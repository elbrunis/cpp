#include "ClapTrap.hpp"


int	main(void)
{
	ClapTrap	bob("Bob");
	ClapTrap	jim("Jim");
	ClapTrap	default_bot;

	bob.attack("Jim");
	jim.takeDamage(0);
	
	jim.beRepaired(5);
	jim.attack("Bob");
	bob.takeDamage(0);

	for (int i = 0; i < 10; i++)
		bob.attack("Jim");

	bob.beRepaired(10);

	jim.takeDamage(20);
	jim.beRepaired(10);
	jim.attack("Bob");

	ClapTrap	bob_clone(bob);
	default_bot = jim;

	return (0);
}