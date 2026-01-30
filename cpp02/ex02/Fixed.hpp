#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		// Constructors
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &src);
	
		// Operators
		// comparison
		// >, <
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		// >=, <=
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		// ==, and !=.
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		// arithmetic

		// +, -
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		// *, and /
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		// increment/decrement
		// ++, --
		Fixed& operator++(void);	// pre-increment
		Fixed  operator++(int);		// post-increment
		Fixed& operator--(void);	// pre-decrement
		Fixed  operator--(int);		// post-decrement
		// equal
		Fixed &operator=(const Fixed &src);


		~Fixed(){};

		// get info and set bits
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		// convert number types
		float				toFloat( void ) const;
		int					toInt( void ) const;
	
		// compararison tools
		static Fixed&		min(Fixed& n1, Fixed& n2);
		static const Fixed&	min(const Fixed& n1, const Fixed& n2);
		static Fixed&		max(Fixed& n1, Fixed& n2);
		static const Fixed&	max(const Fixed& n1, const Fixed& n2);


};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif