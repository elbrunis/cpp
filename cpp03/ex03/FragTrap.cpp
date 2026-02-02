#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->name << " has been constructed!" << std::endl;
	this->attack_damage = 30;
	this->energy_points = 100;
	this->health_points = 100;
}
FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap " << this->name << " has been created with defaultconstructed!" << std::endl;
	this->attack_damage = 30;
	this->energy_points = 100;
	this->health_points = 100;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy)
{
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has been destroyed!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& cpy)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &cpy)
		ClapTrap::operator=(cpy);
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->health_points > 0 && this->energy_points > 0)
	{
		this->energy_points -= 1;
		std::cout << "FragTrap " << name << " attacks " << target << "..." << std::endl;
	}
	else
		std::cout << "FragTrap " << name << " is out of energy/HP!" << std::endl;
}


void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " says: Give me five, guys! 🖐️" << std::endl;
}
