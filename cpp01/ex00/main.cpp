#include "Zombie.hpp"
#include <sstream>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	int n_zombies = atoi(argv[1]);

	std::cout << "Probamos memoria del stack:\n\n" << std::endl;
	for (int i = 0; i < n_zombies; i++)
	{
		std::ostringstream ss;
		ss << "Zombie_stack_" << i;
		randomChump(ss.str());
	}

	std::cout << "Probamos memoria en el heap:\n\n" << std::endl;
	for (int i = 0; i < n_zombies; i++)
	{
		std::ostringstream ss;
		ss << "Zombie_heap_" << i;
		Zombie *heap_zombie = newZombie(ss.str());
		heap_zombie->announce();
		delete heap_zombie;
	}
}