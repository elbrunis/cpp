#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{

	private:

		std::string _name;
		Weapon *_myWeapon;

	public:

		HumanB(std::string name);
		~HumanB(void){};

        void setWeapon(Weapon& myWeapon);
		void attack(void);

};

#endif