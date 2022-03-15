#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void) 
{
    
}

Harl::~Harl(void) 
{
    
}

void Harl::complain(std::string level) 
{
	struct table { 
		std::string name; 
		void(Harl::*func)( void );
	};
	table lookup[] = {
		{"debug", &Harl::debug},
		{"info", &Harl::info},
		{"warning", &Harl::warning},
		{"error", &Harl::error},
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

void Harl::debug(void) 
{
    std::cout << DEBUG << std::endl;
}

void Harl::info(void) 
{
    std::cout << INFO << std::endl;
}

void Harl::warning(void) 
{
    std::cout << WARNING << std::endl;
}

void Harl::error(void) 
{
    std::cout << ERROR << std::endl;
}
