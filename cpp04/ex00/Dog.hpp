#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(std::string type);
		Dog(void);
		Dog(const Dog& other);

		~Dog();

		Dog& operator=(const Dog& other);

		void makeSound(void) const;
		std::string getType(void) const;
};

#endif
