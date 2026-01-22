#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *new_heap = new Zombie(name);
	return (new_heap);
}
