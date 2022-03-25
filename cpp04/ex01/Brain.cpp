#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "CONSTRUCTOR: Brain constructed" << std::endl;
}

Brain::Brain(const Brain &copy) 
{
	std::cout << "COPY CONSTRUCTOR: Brain copied" << std::endl;
	*this = copy;
}

Brain::~Brain(void) 
{
	std::cout << "DECONSTRUCTOR: Brain deconstructed" << std::endl;
}

Brain & Brain::operator=(const Brain &copy) 
{
	std::cout << "ASSIGNEMENT OPERATOR OVERLOAD: Brain copied through assignment operator overload" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return *this;
}
