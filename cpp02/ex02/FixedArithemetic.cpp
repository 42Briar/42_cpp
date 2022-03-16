#include "Fixed.hpp"

Fixed Fixed::operator* (const Fixed &b)
{
	Fixed out(this->toFloat() * b.toFloat());

	return out;
}

Fixed Fixed::operator/ (const Fixed &b)
{
	Fixed out(this->toFloat() / b.toFloat());

	return out;
}

Fixed Fixed::operator+ (const Fixed &b)
{
	Fixed out;

	out.setRawBits(fpnumval + b.fpnumval);
	return out;
}

Fixed Fixed::operator- (const Fixed &b)
{
	Fixed out;

	out.setRawBits(fpnumval - b.fpnumval);
	return out;
}

Fixed &Fixed::operator++ ()
{
	fpnumval++;
	return *this;
}

Fixed Fixed::operator++ (int)
{
	Fixed tmp(*this);
	fpnumval++;
	return tmp;
}

Fixed &Fixed::operator-- ()
{
	fpnumval--;
	return *this;	
}

Fixed Fixed::operator-- (int)
{
	Fixed tmp(*this);
	fpnumval--;
	return tmp;
}