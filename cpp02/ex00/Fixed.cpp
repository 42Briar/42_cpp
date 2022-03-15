#include "Fixed.hpp"

Fixed::Fixed(void) 
{
    fpnumval = 0;
}

Fixed::Fixed(const Fixed &newfixed)
{
	*this = newfixed;
}

Fixed::~Fixed(void) 
{
    
}

Fixed &Fixed::operator= (const Fixed &newfixed)
{
	fpnumval = newfixed.fpnumval;

	return *this;
}

int Fixed::getRawBits( void ) const
{
	return fpnumval;
}

void Fixed::setRawBits( int const raw)
{
	fpnumval = raw;
}