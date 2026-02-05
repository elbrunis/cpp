#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal(std::string type);
		Animal(void);
		Animal(const Animal& other);

		virtual ~Animal();

		Animal& operator=(const Animal& other);

		virtual void makeSound(void) const;
		virtual std::string getType(void) const;

	protected:
		std::string type;

};


#endif
