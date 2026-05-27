#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& _name): name(_name), health_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << name << " has been constructed!" << std::endl;
}

ClapTrap::ClapTrap(void): name("Default"), health_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << name << " has been created with default constructor!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& otro)
{
	*this = otro;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& otro)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;

	if (this != &otro)
	{
		this->name = otro.name;
		this->health_points = otro.health_points;
		this->energy_points = otro.energy_points;
		this->attack_damage = otro.attack_damage;
	}
	return *this;
}


void ClapTrap::attack(const std::string& target)
{
	if (this->health_points > 0 && this->energy_points > 0)
	{
		this->energy_points -= 1;
		std::cout << "ClapTrap " << name << " attacks " << target << "..." << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is out of energy/HP!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((unsigned int)this->health_points >= amount)
		this->health_points -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->health_points > 0 && this->energy_points > 0)
	{
		--energy_points;
		this->health_points += amount;
		std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
	}
	else	
		std::cout << "ClapTrap " << name << " can't repair: no energy/HP left!" << std::endl;
}