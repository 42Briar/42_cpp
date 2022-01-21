#include "phonebook.hpp"
#include <string>
#include <iostream>
#include <cctype>

Phonebook::Phonebook ( void )
{

}

Phonebook::~Phonebook ( void )
{
	
}

void Phonebook::add ( void )
{
	for (int i = 0; i < 8; i++)
	{
		if (!Phonebook::entries[i].store)
		{
			Phonebook::entries[i].storeinfo();
			return;
		}
	}
	for (int i = 0; i < 7; i++)
		Phonebook::entries[i] = Phonebook::entries[i+1]; 
	Phonebook::entries[7].storeinfo();
	return;
}

void Phonebook::search ( void )
{
	std::string response;

	if (Phonebook::entries[0].store == false)
	{
		std::cout << "No contacts saved yet. Type 'ADD' to enter a contact" << std::endl;
		return ;
	}
	std::cout << "|     index|first name| last name| nick name|" << std::endl; 
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
		Phonebook::entries[i].display(i);
	std::cout << "Enter index of desired contact: ";
	std::getline (std::cin, response);
	if (response.length() > 1 || !isdigit(response[0]) || (response[0] - '0') > 7)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	Phonebook::entries[(response[0] - '0')].dispfull();
	return;
}
