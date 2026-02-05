#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal Parameterized constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;

	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;

	if (this != &other)
		this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->type << " makes an unknown sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return(type);
}