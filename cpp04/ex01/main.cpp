#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	std::cout << "\033[34m----------PRUEBA CONSTRUCTOR NORMAL---------\033[0m" << std::endl;
	
	std::cout << "\033[32mCreate:\n\033[0m" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\033[38;5;208mDelete:\n\033[0m" << std::endl;
	delete j;
	delete i;

	std::cout << "\033[34m-----------ARRAY TEST-------------\033[0m" << std::endl;
	
	std::cout << "\033[32mCreate:\n\033[0m" << std::endl;
	int size = 4; // Cambiado a 4 para que sea par y simétrico
	Animal* animals[size];
	for(int i = 0; i < size ; i++)
	{
		if (i < (size / 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\033[38;5;208mDelete:\n\033[0m" << std::endl;
	for(int i = 0; i < size ; i++)
		delete animals[i];

	std::cout << "\033[34m--------------BRAIN TEST (Getters/Setters)------------\033[0m" << std::endl;
	
	Dog* doggy = new Dog();
	doggy->setIdea(0, "Tengo hambre");
	doggy->setIdea(1, "Quiero jugar");
	
	std::cout << "Idea 0: " << doggy->getIdea(0) << std::endl;
	std::cout << "Idea 1: " << doggy->getIdea(1) << std::endl;
	delete doggy;

	std::cout << "\033[34m--------------DEEP COPY TEST (Copy Constructor)------------\033[0m" << std::endl;
	
	Dog basic;
	basic.setIdea(0, "Soy el perro original");
	
	{//  scope de hambito
		std::cout << "\033[32mCreando copia temporal...\033[0m" << std::endl;
		Dog tmp = basic; // Aquí se llama al Constructor de Copia
		std::cout << "Idea de tmp: " << tmp.getIdea(0) << std::endl;
		
		tmp.setIdea(0, "He cambiado mi idea (soy tmp)");
		std::cout << "Idea de tmp modificada: " << tmp.getIdea(0) << std::endl;
		std::cout << "Idea de basic tras cambio en tmp: " << basic.getIdea(0) << std::endl;
		
		std::cout << "\033[38;5;208mDestruyendo tmp...\033[0m" << std::endl;
	} // tmp muere aquí. Si no hay Deep Copy, el cerebro de 'basic' petaría.

	std::cout << "Post-scope: Idea de basic sigue viva: " << basic.getIdea(0) << std::endl;

	std::cout << "\033[34m--------------DEEP COPY TEST (Assignment Operator)------------\033[0m" << std::endl;

	Cat cat1;
	cat1.setIdea(0, "Miau original");
	Cat cat2;
	cat2 = cat1; // Aquí se llama al Operador de Asignación
	
	cat2.setIdea(0, "Miau modificado");
	std::cout << "Cat1 idea: " << cat1.getIdea(0) << std::endl;
	std::cout << "Cat2 idea: " << cat2.getIdea(0) << std::endl;

	std::cout << "\033[34m------------------FIN DE LOS TESTS------------------\033[0m" << std::endl;
	
	return 0;
}