#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed(void) 
{
    fpnumval = 0;
}

Fixed::Fixed(const Fixed &newfixed)
{
	*this = newfixed;
}

Fixed::Fixed(const int fpval)
{
	fpnumval = fpval << fracbits;
}

Fixed::Fixed(const float fpval)
{
	fpnumval = roundf(fpval * pow(2, fracbits));
	return;
}

Fixed::~Fixed(void) 
{
    
}

Fixed &Fixed::operator= (const Fixed &newfixed)
{
	fpnumval = newfixed.fpnumval;

	return *this;
}

int Fixed::getRawBits(void) const
{
	return fpnumval;
}

void Fixed::setRawBits(int const raw)
{
	fpnumval = raw;
}

int Fixed::toInt(void) const
{
	return fpnumval >> fracbits;
}

float Fixed::toFloat(void) const
{
	return (float)(fpnumval / pow(2, fracbits));
}

std::ostream &operator<< (std::ostream &os, const Fixed &que)
{
	os << que.toFloat();
	return os;
}