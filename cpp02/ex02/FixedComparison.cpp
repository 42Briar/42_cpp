#include "Fixed.hpp"

bool Fixed::operator> (const Fixed &b) const
{
	return fpnumval > b.fpnumval;
}

bool Fixed::operator< (const Fixed &b) const
{
	return fpnumval < b.fpnumval;
}

bool Fixed::operator>= (const Fixed &b) const
{
	return fpnumval >= b.fpnumval;
}

bool Fixed::operator<= (const Fixed &b) const
{
	return fpnumval <= b.fpnumval;
}

bool Fixed::operator== (const Fixed &b) const
{
	return fpnumval == b.fpnumval;
}

bool Fixed::operator!= (const Fixed &b) const
{
	return fpnumval != b.fpnumval;
}
