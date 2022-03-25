#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "CONSTRUCTOR: Cat constructed" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat &copy) 
{
	std::cout << "COPY CONSTRUCTOR: Cat copied" << std::endl;
	*this = copy;
}

Cat::~Cat(void) 
{
	delete brain;
	std::cout << "DECONSTRUCTOR: Cat deconstructed" << std::endl;
}

Cat & Cat::operator=(const Cat &copy)
{
	std::cout << "ASSIGNEMENT OPERATOR OVERLOAD: Cat copied through assignment operator overload" << std::endl;
	this->type = copy.type;

	return *this;
}

void Cat::MakeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain *Cat::getbrain(void) const
{
	return brain;
}