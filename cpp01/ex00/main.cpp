#include "Zombie.hpp"
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	int n_zombies = atoi(argv[1]);


	// pruena stack
	std::cout << "Probamos memoria del stack:\n\n" << std::endl;
	for (int i = 0; i  < n_zombies; i++)
		randomChump("Zombie_stack_" + std::to_string(i));

	// pruena memoria en el heap (dinamica)
	std::cout << "Probamos memoria en el heap:\n\n" << std::endl;
	for (int i = 0; i < n_zombies; i++)
	{
		Zombie *heap_zombie = newZombie("Zombie_heap_" + std::to_string(i));
		heap_zombie->announce( );
		delete heap_zombie; // hay q liberar la memoria para q no se sobrescriba
	} // quitar el delete para ver la diferencia

}