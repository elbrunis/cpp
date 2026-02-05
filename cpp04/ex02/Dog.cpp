#include "Dog.hpp"

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog Parameterized constructor called" << std::endl;
	this->brain = new Brain();
}
Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->brain = new Brain();
}
Dog::Dog(const Dog& other) : Animal("Dog")
{
	std::cout << "Dog Copy constructor called" << std::endl;

	this->brain = NULL;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog Assignment operator called" << std::endl;

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

void	Dog::makeSound(void) const
{
	std::cout << this->type << " says: Woof" << std::endl;
}

std::string	Dog::getType(void) const
{
	return(type);
}

void	Dog::setIdea(int id, std::string idea)
{
	this->brain->setIdea(id, idea);
}
const std::string&	Dog::getIdea(int id)
{
	return(this->brain->getIdea(id));
}