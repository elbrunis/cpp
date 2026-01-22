#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{

	private:

		std::string _name;
		Weapon& _myWeapon;

	public:

		HumanA(std::string name, Weapon& myWeapon);
		~HumanA(void){};

		void attack(void);

};

#endif