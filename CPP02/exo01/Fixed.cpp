#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed& originalFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = originalFixed.getRawBits();
}

Fixed::Fixed(const int& newIntValue)
{
	std::cout << "Int constructor called" << std::endl;
	_value = newIntValue << _nbBits;
}

Fixed::Fixed(const float& newFloatValue)
{
	std::cout << "float constructor called" << std::endl;
	_value = roundf(newFloatValue * (1 << _nbBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed &rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_value = rhs.getRawBits();
	return *this;
}

std::ostream& operator<<( std::ostream &o, Fixed const &myFixed )
{
	o << myFixed.toFloat();
    return o;
}

int		Fixed::getRawBits( void ) const
{
	return this->_value;
}

void 	Fixed::setRawBits( int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)_value / (1 << _nbBits);
}

int Fixed::toInt( void ) const 
{
    return _value >> _nbBits;
}
//----------------- Comparison operators -----------------//
		bool	Fixed::operator=( const Fixed &rhs )
		{
			return this->getRawBits() > rhs.getRawBits();
		}
		bool	Fixed::operator>( const Fixed &rhs ) const
		{
			return this->getRawBits() > rhs.getRawBits();
		}
		bool	Fixed::operator<( const Fixed &rhs ) const
		{
			return this->getRawBits() < rhs.getRawBits();
		}
		bool	Fixed::operator>=( const Fixed &rhs ) const
		{
			return this->getRawBits() >= rhs.getRawBits();
		}
		bool	Fixed::operator<=( const Fixed &rhs ) const
		{
			return this->getRawBits() <= rhs.getRawBits();
		}
		bool	Fixed::operator==( const Fixed &rhs ) const
		{
			return this->getRawBits() == rhs.getRawBits();
		}
		bool	Fixed::operator!=( const Fixed &rhs ) const
		{
			return this->getRawBits() != rhs.getRawBits();
		}
		//------------------ Arithmetic operators ------------------//
		Fixed	Fixed::operator+( const Fixed &rhs ) const
		{
			return this->getRawBits() + rhs.getRawBits();
		}
		Fixed	Fixed::operator-( const Fixed &rhs ) const
		{
			return this->getRawBits() - rhs.getRawBits();
		}
		Fixed	Fixed::operator*( const Fixed &rhs ) const
		{
			return this->getRawBits() * rhs.getRawBits();
		}
		Fixed	Fixed::operator/( const Fixed &rhs ) const
		{
			return this->getRawBits() / rhs.getRawBits();
		}	
		Fixed	Fixed::operator++( void )
		{
			return this->getRawBits() + 1;
		}
		Fixed	Fixed::operator--( void );
		Fixed	Fixed::operator++( int );
		Fixed	Fixed::operator--( int );
		Fixed	Fixed::operator+=( const Fixed &rhs );
		Fixed	Fixed::operator-=( const Fixed &rhs );
		Fixed	Fixed::operator*=( const Fixed &rhs );
		Fixed	Fixed::operator/=( const Fixed &rhs );
		static Fixed& min( Fixed &a, Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
		static Fixed const& min( Fixed const &a, Fixed const &b );
		static Fixed const& max( Fixed const &a, Fixed const &b );