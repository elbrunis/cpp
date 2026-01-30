#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "--- Prueba de valores iniciales ---" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "\n--- Prueba de incrementos (El paso de hormiga) ---" << std::endl;
    std::cout << "a inicial: " << a << std::endl;
    std::cout << "++a:       " << ++a << "  <- (Aqui ya ha subido)" << std::endl;
    std::cout << "Valor despues de ++++a: " << ++++a << std::endl;
    std::cout << "a actual:  " << a << std::endl;
    std::cout << "a++:       " << a++ << "  <- (Aqui devuelve el viejo)" << std::endl;
    std::cout << "a final:   " << a << "  <- (Aqui ya se ve el nuevo)" << std::endl;

    std::cout << "\n--- Prueba de Arithmetica ---" << std::endl;
    Fixed c(42.42f);
    Fixed d(2);
    std::cout << c << " + " << d << " = " << (c + d) << std::endl;
    std::cout << c << " * " << d << " = " << (c * d) << std::endl;

    std::cout << "\n--- Prueba de Min/Max ---" << std::endl;
    std::cout << "Max entre a y b: " << Fixed::max(a, b) << std::endl;
    std::cout << "Min entre c y d: " << Fixed::min(c, d) << std::endl;

    return 0;
}