#include "phonebook.hpp"
#include <string>
#include <iostream>

Phonebook::Phonebook ( void )
{

}

Phonebook::~Phonebook ( void )
{
	
}

void Phonebook::add ( void )
{
	std::string input;
	
	for (int i = 0; i < 8; i++)
	{
		if (!Phonebook::entries[i].store)
		{
			Phonebook::entries[i].store = true;
			std::cout << "Enter first name: ";
			std::getline (std::cin, input);
			Phonebook::entries[i].first_name = input;
			return;
		}

	}
	return;
}

void Phonebook::search ( void )
{
	return;
}