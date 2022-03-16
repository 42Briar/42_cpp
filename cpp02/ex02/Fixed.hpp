#ifndef FIXED_HPP_
# define FIXED_HPP_

#include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(const Fixed &newfixed);
	Fixed(const int fpval);
	Fixed(const float fpval);
	~Fixed(void);

	//assignement operator
	Fixed &operator= (const Fixed &newfixed);

	//comparison operators
	bool operator> (const Fixed &b) const;
	bool operator< (const Fixed &b) const;
	bool operator>= (const Fixed &b) const;
	bool operator<= (const Fixed &b) const;
	bool operator== (const Fixed &b) const;
	bool operator!= (const Fixed &b) const;

	//arithmetic operators
	Fixed operator* (const Fixed &b);
	Fixed operator/ (const Fixed &b);
	Fixed operator+ (const Fixed &b);
	Fixed operator- (const Fixed &b);

	//increment and decrement operators
	Fixed &operator++ (void);
	Fixed operator++ (int);
	Fixed &operator-- (void);
	Fixed operator-- (int);

	static Fixed &min (Fixed &a, Fixed &b);
	static const Fixed &min (const Fixed &a, const Fixed &b);
	static Fixed &max (Fixed &a, Fixed &b);
	static const Fixed &max (const Fixed &a, const Fixed &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	void printmsgfalse(void);
	void printmsgtrue(void);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int fpnumval;
	static const int fracbits = 8;
	bool printmsg;

};

std::ostream &operator<< (std::ostream &os, const Fixed &que);

#endif