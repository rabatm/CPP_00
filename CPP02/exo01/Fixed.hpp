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
		//----------------- Comparison operators -----------------//
		bool	operator=( const Fixed &rhs ) const;
		bool	operator>( const Fixed &rhs ) const;
		bool	operator<( const Fixed &rhs ) const;
		bool	operator>=( const Fixed &rhs ) const;
		bool	operator<=( const Fixed &rhs ) const;
		bool	operator==( const Fixed &rhs ) const;
		bool	operator!=( const Fixed &rhs ) const;
		Fixed	operator+( const Fixed &rhs ) const;
		Fixed	operator-( const Fixed &rhs ) const;
		Fixed	operator*( const Fixed &rhs ) const;
		Fixed	operator/( const Fixed &rhs ) const;
		//------------------ Increment/Decrement operators ------------------//
		Fixed	operator++( void ) const;
		Fixed	operator--( void ) const;
		Fixed	operator++( int );
		Fixed	operator--( int );
		Fixed	operator+=( const Fixed &rhs );
		Fixed	operator-=( const Fixed &rhs );
		Fixed	operator*=( const Fixed &rhs );
		Fixed	operator/=( const Fixed &rhs );
		static Fixed& min( Fixed &a, Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
		static Fixed const& min( Fixed const &a, Fixed const &b );
		static Fixed const& max( Fixed const &a, Fixed const &b );

		friend std::ostream& operator<<(std::ostream &o, Fixed const &myFixed);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
		float	toFloat( void ) const;
		int 	toInt( void ) const;
};

#endif