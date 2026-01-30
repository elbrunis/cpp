#include "Fixed.hpp"

// constructores
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;	
	this->_value = src.getRawBits();
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (n << this->_bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * (1 << this->_bits));
}


// operadores
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}


// destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


// operaciones
int	Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->_value / (float)(1 << this->_bits); // Return temporal para que compile
}

int Fixed::toInt(void) const
{
	return this->_value >> this->_bits;
}

