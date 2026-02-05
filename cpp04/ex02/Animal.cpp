#include "Animal.hpp"

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal Parameterized constructor called" << std::endl;
}
Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}
Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy constructor called" << std::endl;

	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	std::cout << "Animal Assignment operator called" << std::endl;

	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return(type);
}