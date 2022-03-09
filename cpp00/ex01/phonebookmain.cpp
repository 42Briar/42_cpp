#include <iostream>
#include <string>
#include "phonebook.hpp"

int main(void)
{
	std::string usecmd;
	Phonebook phonebook;
	
	while (true)
	{
		std::cout << "Commands: ADD, SEARCH, EXIT. Enter one: ";
		std::getline(std::cin, usecmd);
		if (usecmd.compare("EXIT") == 0)
			return (0);
		if (usecmd.compare("ADD") == 0)
			phonebook.add();
		else if (usecmd.compare("SEARCH") == 0)
			phonebook.search();
		else
			std::cout << "Unknown command, try again." << std::endl;
	}
	return (0);
}
