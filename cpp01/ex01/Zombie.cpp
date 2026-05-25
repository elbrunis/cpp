#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

void	Zombie::nameZombie(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << ": has been destroyed" << std::endl;
}