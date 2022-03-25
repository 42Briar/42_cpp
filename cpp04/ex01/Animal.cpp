#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) 
{
	std::cout << "CONSTRUCTOR: Animal constructed" << std::endl;
	type = "a living organism that feeds on organic matter, typically having specialized sense organs and nervous system and able to respond rapidly to stimuli.";
}

Animal::Animal(const Animal &copy) 
{
	std::cout << "COPY CONSTRUCTOR: Animal copied" << std::endl;
	this->type = copy.type;
}

Animal::~Animal(void) 
{
	std::cout << "DECONSTRUCTOR: Animal deconstructed" << std::endl;
}

Animal & Animal::operator=(const Animal &copy)
{
	std::cout << "ASSIGNEMENT OPERATOR OVERLOAD: Animal copied through assignment operator overload" << std::endl;
	this->type = copy.type;

	return *this;
}

void Animal::MakeSound(void) const
{
	std::cout << "* generic animal noises *" << std::endl;
}
