#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) 
{
	std::cout << "CONSTRUCTOR: Dog constructed" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &copy) 
{
	std::cout << "COPY CONSTRUCTOR: Dog copied" << std::endl;
	*this = copy;
}

Dog::~Dog(void) 
{
	delete brain;
	std::cout << "DECONSTRUCTOR: Dog deconstructed" << std::endl;
}

Dog & Dog::operator=(const Dog &copy)
{
	std::cout << "ASSIGNEMENT OPERATOR OVERLOAD: Dog copied through assignment operator overload" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*(copy.brain));

	return *this;
}

void Dog::MakeSound(void) const
{
	std::cout << "Bark" << std::endl;
}

Brain *Dog::getbrain(void) const
{
	return brain;
}