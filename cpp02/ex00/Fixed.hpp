#ifndef FIXED_HPP_
# define FIXED_HPP_

class Fixed {

public:
	Fixed( void );
	Fixed( const Fixed &newfixed);
	~Fixed( void );

	Fixed &operator= (const Fixed &newfixed);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	void printmsgfalse( void );
	void printmsgtrue( void );

private:
	int fpnumval;
	static const int fracbits = 8;
	bool printmsg;

};

#endif