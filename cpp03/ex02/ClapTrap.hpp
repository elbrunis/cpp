#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
	public:

		ClapTrap(const std::string& _name);
		ClapTrap(void);
		ClapTrap(const ClapTrap& otro);
		virtual ~ClapTrap();

		ClapTrap& operator=(const ClapTrap& otro);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:

		std::string name;
		int health_points;
		int energy_points;
		int attack_damage;
};


#endif