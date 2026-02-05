#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
	std::cout << "\033[34m--------------ABSTRACT CLASS TEST------------\033[0m" << std::endl;

	// 1. Intento de instanciar la clase abstracta (Descomenta para ver el error)
	//const Animal* meta = new Animal(); // <-- ESTO NO DEBERÍA COMPILAR

	// 2. Comprobar que Dog y Cat siguen funcionando
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\033[32m" << j->getType() << " dice: \033[0m";
	j->makeSound();

	std::cout << "\033[32m" << i->getType() << " dice: \033[0m";
	i->makeSound();

	// 3. Limpieza de memoria
	std::cout << "\033[31m" << std::endl << "Eliminando objetos..." << "\033[0m" << std::endl;
	delete j;
	delete i;

	std::cout << "\033[34m---------------------------------------------\033[0m" << std::endl;

	return 0;
}