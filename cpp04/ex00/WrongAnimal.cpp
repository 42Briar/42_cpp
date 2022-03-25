#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) 
{
	std::cout << "CONSTRUCTOR: WrongAnimal constructed" << std::endl;
	type = "a living organism that feeds on organic matter, typically having specialized sense organs and nervous system and able to respond rapidly to stimuli.";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) 
{
	std::cout << "COPY CONSTRUCTOR: WrongAnimal copied" << std::endl;
	this->type = copy.type;
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << "DECONSTRUCTOR: WrongAnimal deconstructed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "ASSIGNEMENT OPERATOR OVERLOAD: WrongAnimal copied through assignment operator overload" << std::endl;
	this->type = copy.type;

	return *this;
}

void WrongAnimal::MakeSound(void) const
{
	std::cout << "* generic wronganimal noises *" << std::endl;
}