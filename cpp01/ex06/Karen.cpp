#include "Karen.hpp"
#include <iostream>
#include <string>

Karen::Karen( void ) 
{

}

Karen::~Karen(void) 
{
    
}

void Karen::complain(std::string level) 
{
	struct table { 
		std::string name; 
		void(Karen::*func)( void );
	};
	table lookup[] = {
		{"debug", &Karen::debug},
		{"info", &Karen::info},
		{"warning", &Karen::warning},
		{"error", &Karen::error},
	};

	for (int i = 0; i < 4; i++)
	{
		if (lookup[i].name == level)
		{	
			(this->*lookup[i].func)();
			return ;
		}
	}
}

void Karen::debug(void) 
{
    std::cout << "[ DEBUG ]\n" << DEBUG << "\n\n";
}

void Karen::info(void) 
{
    std::cout << "[ INFO ]\n" << INFO << "\n\n";
}

void Karen::warning(void) 
{
    std::cout << "[ WARNING ]\n" << WARNING << "\n\n";
}

void Karen::error(void) 
{
    std::cout << "[ ERROR ]\n" << ERROR << "\n\n";
}
