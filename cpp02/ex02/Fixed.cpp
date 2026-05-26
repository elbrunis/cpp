#include "Fixed.hpp"

// constructores
Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed &src)
{	
	this->_value = src.getRawBits();
}

Fixed::Fixed(const int n)
{
	this->_value = (n << this->_bits);
}

Fixed::Fixed(const float n)
{
	this->_value = roundf(n * (1 << this->_bits));
}



// destructor
Fixed::~Fixed()
{
}

// operaciones
// get info and set bits
int	Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

// convert number types
float Fixed::toFloat(void) const
{
	return (float)this->_value / (float)(1 << this->_bits);
}

int Fixed::toInt(void) const
{
	return this->_value >> this->_bits;
}

// compararison tools
Fixed&	Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return(n1);
	return(n2);
}

const Fixed&	Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return(n1);
	return(n2);
}

Fixed&	Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return(n2);
	return(n1);
}

const Fixed&	Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return(n2);
	return(n1);
}




// operadores
// global operator ostream classa
std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}
// comparison
// >
bool Fixed::operator>(const Fixed& other) const
{
	return this->getRawBits() > other.getRawBits();
}
// <
bool Fixed::operator<(const Fixed& other) const
{
	return this->getRawBits() < other.getRawBits();
}
// >=
bool Fixed::operator>=(const Fixed& other) const
{
	return this->getRawBits() >= other.getRawBits();
}
// <=
bool Fixed::operator<=(const Fixed& other) const
{
	return this->getRawBits() <= other.getRawBits();
}
// ==
bool Fixed::operator==(const Fixed& other) const
{
	return this->getRawBits() == other.getRawBits();
}
// !=
bool Fixed::operator!=(const Fixed& other) const
{
	return this->getRawBits() != other.getRawBits();
}
// arithmetic
// +
Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}
// -
Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}
// *
Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}
// /
Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}
// increment/decrement
// pre-increment
Fixed& Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}
// post-increment
Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	this->setRawBits(this->getRawBits() + 1);
	return copy;
}
// pre-decrement
Fixed& Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}
// post-decrement
Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	this->setRawBits(this->getRawBits() - 1);
	return copy;
}
// equal
Fixed &Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return *this;
}

