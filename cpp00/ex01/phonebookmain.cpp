#include <iostream>
#include <string>
#include "phonebook.hpp"

int main(void)
{
	std::string usecmd;
	Phonebook phonebook;
	
	while (std::cin)
	{
		std::cout << "Commands: ADD, SEARCH, EXIT. Enter one: ";
		std::cin >> usecmd;
		if (usecmd == "EXIT")
			return (0);
		if (usecmd == "ADD")
			phonebook.add();
		else if (usecmd == "SEARCH")
			phonebook.search();
		else
			std::cout << "Unknown command, try again." << std::endl;
	}
	return (0);
}
