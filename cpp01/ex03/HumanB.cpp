#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _myWeapon(NULL)
{
}

void	HumanB::setWeapon(Weapon& myWeapon)
{
	_myWeapon = &myWeapon;
}

void	HumanB::attack(void)
{
	if (_myWeapon)
		std::cout << _name << " attacks with their " << _myWeapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with nothing" << std::endl;

}