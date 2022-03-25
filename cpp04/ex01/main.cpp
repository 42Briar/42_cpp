#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>
#include <iostream>

int main()
{
	Animal *animals[10];
	std::stringstream s;

	for (int i = 0; i < 10; i++)
	{
		if ((i % 2) == 0)
		{
			animals[i] = new Dog();
			s << "sick dog idea number " << i;
			animals[i]->getbrain()->ideas[0] = s.str();
		}
		else 
		{
			animals[i] = new Cat();
			s << "sick cat idea number " << i;
			animals[i]->getbrain()->ideas[0] = s.str();
		}
		s.str("");
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << animals[i]->getbrain()->ideas[0] << std::endl;
		delete animals[i];
	}

	//system("leaks execute01");

}