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
		Fixed& operator=( const Fixed &rhs );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif