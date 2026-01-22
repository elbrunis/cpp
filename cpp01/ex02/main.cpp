#include <string>
#include <iostream>

/*	la referencia es ejactamente igual q un
	puntero solo q con diferente sintaxis
	una sintaxis  mas limpia. 				*/

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string; 

	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}