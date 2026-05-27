#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(const std::string& _name);
		ScavTrap(void);
		ScavTrap(const ScavTrap& cpy);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap& cpy);

		void attack(const std::string& target);
		void guardGate();
};

#endif