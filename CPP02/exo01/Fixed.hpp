#include <string>
#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	private :
		int	_value;
		int const static _nbBits = 8;

	public :
		Fixed();
		Fixed(const Fixed& originalFixed);
		Fixed(const int& newIntValue);
		Fixed(const float& newFloatValue);
		Fixed& operator=( const Fixed &rhs );
		friend std::ostream& operator<<(std::ostream &o, Fixed const &myFixed);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
		float	toFloat( void ) const;
		int 	toInt( void ) const;
};

#endif