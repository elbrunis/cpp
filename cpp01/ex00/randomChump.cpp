#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie new_stack =  Zombie(name);
	new_stack.announce();
}
