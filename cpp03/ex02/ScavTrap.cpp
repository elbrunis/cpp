#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap " << this->name << " has been constructed!" << std::endl;
	this->attack_damage = 20;
	this->energy_points = 50;
	this->health_points = 100;
}
ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "ScavTrap " << this->name << " has been created with defaultconstructed!" << std::endl;
	this->attack_damage = 20;
	this->energy_points = 50;
	this->health_points = 100;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " has been destroyed!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& cpy)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &cpy)
		ClapTrap::operator=(cpy);
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->health_points > 0 && this->energy_points > 0)
	{
		this->energy_points -= 1;
		std::cout << "ScavTrap " << name << " attacks " << target << "..." << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " is out of energy/HP!" << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}
