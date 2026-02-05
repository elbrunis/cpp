#include "WrongCat.hpp"

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat Parameterized constructor called" << std::endl;
}
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Copy constructor called" << std::endl;

	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Assignment operator called" << std::endl;

	if (this != &other)
		this->type = other.type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->type << " says: Meow" << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return(type);
}