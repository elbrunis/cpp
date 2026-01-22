#include "Zombie.hpp"
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	int n_zombies = atoi(argv[1]);

	Zombie *zombies = zombieHorde(n_zombies, "zombie");
	
	for (int i = 0; i < n_zombies; i++)
		zombies[i].announce();
	delete[] zombies;
	
	return (0);
}