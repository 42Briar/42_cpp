#ifndef FIXED_HPP_
# define FIXED_HPP_

#include <iostream>

class Fixed {

public:
	Fixed( void );
	Fixed( const Fixed &newfixed);
	Fixed( const int fpval);
	Fixed( const float fpval);
	~Fixed( void );

	Fixed &operator= (const Fixed &newfixed);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	void printmsgfalse( void );
	void printmsgtrue( void );
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int fpnumval;
	static const int fracbits = 8;
	bool printmsg;

};

std::ostream &operator<< (std::ostream &os, const Fixed &que);

#endif