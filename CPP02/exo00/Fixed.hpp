#include <string>
#include <iostream>

#pragma once

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