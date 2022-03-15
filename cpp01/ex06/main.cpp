#include "Karen.hpp"
#include <iostream>

int errorout( const std::string errmsg )
{
	std::cerr << errmsg << std::endl;
	return 1;
}

int main(int ac, char *av[])
{
	if (ac != 2)
		return errorout("Wrong number of arguments");

	Karen test;
	std::string level = av[1];

	if (level != "DEBUG" && level != "WARNING" && level != "INFO" && level != "ERROR")
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}
	switch(av[1][0])
	{
		case 'E': {
			test.complain("error");
			break ;
		}
		case 'W': {
			test.complain("warning");
			test.complain("error");
			break ;
		}
		case 'I': {
			test.complain("info");
			test.complain("warning");
			test.complain("error");
			break ;
		}
		case 'D': {
			test.complain("debug");
			test.complain("info");
			test.complain("warning");
			test.complain("error");
			break ;
		}
	}
}