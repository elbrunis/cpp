#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal(std::string type);
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);

		~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& other);

		void makeSound(void) const;
		std::string getType(void) const;

	protected:
		std::string type;

};


#endif
