#include "Fixed.hpp"
#include <iostream>

int main()
{
	Fixed a;
	Fixed b( 100 );
	Fixed c( 42.42f );
	Fixed d( b );

	a = Fixed( 1234.4321f );


	std::cout << "\nComparison tests:" << std::endl;
	std::cout << (b < c) << std::endl;
	std::cout << (b > c) << std::endl;
	std::cout << (b >= c) << std::endl;
	std::cout << (b <= c) << std::endl;
	std::cout << (b == c) << std::endl;
	std::cout << (b != c) << std::endl;

	std::cout << "\nArithmetic tests:" << std::endl;
	std::cout << (b * c) << std::endl;
	std::cout << (b / c) << std::endl;
	std::cout << (b + c) << std::endl;
	std::cout << (b - c) << std::endl;

	Fixed e;
	Fixed const f(Fixed(5.05f) * Fixed(2));
	Fixed const g(Fixed(99));

	std::cout << "\nIncrement/decrement tests:" << std::endl;
	std::cout << e << std::endl;
	std::cout << ++e << std::endl;
	std::cout << e << std::endl;
	std::cout << e++ << std::endl;
	std::cout << e << std::endl;
	std::cout << f << std::endl;

	std::cout << "\nMin/max tests:" << std::endl;
	std::cout << Fixed::max( b, a ) << std::endl;
	std::cout << Fixed::min( b, a ) << std::endl;
	std::cout << Fixed::max( g, f ) << std::endl;
	std::cout << Fixed::min( g, f ) << std::endl;

	return 0;
}