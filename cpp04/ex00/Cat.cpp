#include "Cat.hpp"

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat Parameterized constructor called" << std::endl;
}
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
}
Cat::Cat(const Cat& other) : Animal("Cat")
{
	std::cout << "Cat Copy constructor called" << std::endl;

	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat Assignment operator called" << std::endl;

	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << " says: Meow" << std::endl;
}

std::string	Cat::getType(void) const
{
	return(type);
}