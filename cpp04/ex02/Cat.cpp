#include "Cat.hpp"

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat Parameterized constructor called" << std::endl;
	this->brain = new Brain();
}
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->brain = new Brain();
}
Cat::Cat(const Cat& other) : Animal("Cat")
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = NULL;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat Assignment operator called" << std::endl;

	if (this != &other)
	{
		if (this->brain)
		{
			delete this->brain;
			this->brain = new Brain(*(other.brain));
		}
		else
			this->brain = new Brain(*(other.brain));
		this->type = other.type;
	}
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
//brain
void	Cat::setIdea(int id, std::string idea)
{
	this->brain->setIdea(id, idea);
}

const std::string&	Cat::getIdea(int id)
{
	return (this->brain->getIdea(id));
}