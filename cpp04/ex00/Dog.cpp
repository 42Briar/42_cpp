#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) 
{
	std::cout << "CONSTRUCTOR: Dog constructed" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &copy) 
{
	std::cout << "COPY CONSTRUCTOR: Dog copied" << std::endl;
	*this = copy;
}

Dog::~Dog(void) 
{
	std::cout << "DECONSTRUCTOR: Dog deconstructed" << std::endl;
}

Dog & Dog::operator=(const Dog &copy)
{
	std::cout << "ASSIGNEMENT OPERATOR OVERLOAD: Dog copied through assignment operator overload" << std::endl;
	this->type = copy.type;

	return *this;
}

void Dog::MakeSound(void) const
{
	std::cout << "Bark" << std::endl;
}