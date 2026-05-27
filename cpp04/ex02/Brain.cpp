#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Empty idea";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain Assignment operator called" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];  		
	}
	return (*this);
}

void	Brain::setIdea(int id, std::string idea)
{
	if (id >= 0 && id < 100)
		this->ideas[id] = idea;
	else
		std::cout << "The idea could not be assigned!!" << std::endl;
}

const std::string&	Brain::getIdea(int id) const
{
	static const std::string empty = "";
	if (id >= 0 && id < 100)
		return(this->ideas[id]);
	else
		return empty;
}