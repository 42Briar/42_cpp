#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "CONSTRUCTOR: WrongCat constructed" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) 
{
	std::cout << "COPY CONSTRUCTOR: WrongCat copied" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void) 
{
	std::cout << "DECONSTRUCTOR: WrongCat deconstructed" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "ASSIGNEMENT OPERATOR OVERLOAD: WrongCat copied through assignment operator overload" << std::endl;
	this->type = copy.type;

	return *this;
}

void WrongCat::MakeSound(void) const
{
	std::cout << "Meow" << std::endl;
}