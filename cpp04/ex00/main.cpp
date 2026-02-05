#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	// --- PRUEBAS CON POLIMORFISMO (LOS BUENOS) ---
	std::cout << "--- PRUEBAS ANIMALES CORRECTOS (CON VIRTUAL) ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Tipo de j: " << j->getType() << std::endl;
	std::cout << "Tipo de i: " << i->getType() << std::endl;

	std::cout << "Sonido de i (Cat): ";
	i->makeSound();
	std::cout << "Sonido de j (Dog): ";
	j->makeSound();
	std::cout << "Sonido de meta (Animal): ";
	meta->makeSound();

	std::cout << "\n--- DESTRUCCION CORRECTA ---" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\n--------------------------------------------\n" << std::endl;

	// --- PRUEBAS SIN POLIMORFISMO (LOS MALOS) ---
	std::cout << "--- PRUEBAS WRONG ANIMAL (SIN VIRTUAL) ---" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "Tipo de wrongCat: " << wrongCat->getType() << std::endl;

	std::cout << "Sonido de wrongCat: ";
	wrongCat->makeSound(); // ¡OJO! Aquí NO saldrá miau
	std::cout << "Sonido de wrongMeta: ";
	wrongMeta->makeSound();

	std::cout << "\n--- DESTRUCCION INCORRECTA ---" << std::endl;
	// Fíjate que aquí NO se llamará al destructor del WrongCat
	delete wrongMeta;
	delete wrongCat;

	return 0;
}