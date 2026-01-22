#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& myWeapon) : _name(name), _myWeapon(myWeapon)
{

}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _myWeapon.getType() << std::endl;
}