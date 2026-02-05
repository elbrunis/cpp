#include "Dog.hpp"

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog Parameterized constructor called" << std::endl;
}
Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}
Dog::Dog(const Dog& other) : Animal("Dog")
{
	std::cout << "Dog Copy constructor called" << std::endl;

	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog Assignment operator called" << std::endl;

	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << " says: Woof" << std::endl;
}

std::string	Dog::getType(void) const
{
	return(type);
}