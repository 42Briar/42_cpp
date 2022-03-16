#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed(void)
{
	printmsg = true;
	if (printmsg)
		std::cout << "Default constructor" << std::endl;
    fpnumval = 0;
}

Fixed::Fixed(const int fpval)
{
	if (printmsg)
		std::cout << "Int constructor" << std::endl;
	fpnumval = fpval << fracbits;
}

Fixed::Fixed(const float fpval)
{
	if (printmsg)
		std::cout << "Float constructor" << std::endl;
	fpnumval = roundf(fpval * pow(2, fracbits));
	return;
}

Fixed::Fixed(const Fixed &newfixed)
{
	this->fpnumval = newfixed.fpnumval;
	this->printmsg = newfixed.printmsg;
	if (printmsg)
		std::cout << "Copy constructor" << std::endl;
}

Fixed::~Fixed(void) 
{
	std::cout << "Deconstructor" << std::endl;   
}

Fixed &Fixed::operator= (const Fixed &newfixed)
{
	printmsg = newfixed.printmsg;
	if (printmsg)
		std::cout << "Assignement operator overload" << std::endl;   
	
	fpnumval = newfixed.fpnumval;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	if (printmsg)
		std::cout << "Get raw bits" << std::endl;  
	return fpnumval;
}

void Fixed::setRawBits( int const raw)
{
	if (printmsg)
		std::cout << "Set raw bits" << std::endl;  
	fpnumval = raw;
}

void Fixed::printmsgfalse( void )
{
	printmsg = false;
}

void Fixed::printmsgtrue( void )
{
	printmsg = true;
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
