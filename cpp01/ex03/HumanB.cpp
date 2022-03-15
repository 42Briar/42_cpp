#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string newname )
{
	name = newname;
}

HumanB::HumanB( void )
{

}

HumanB::~HumanB( void )
{

}

void HumanB::setWeapon( Weapon &newweapon )
{
	weapon = &newweapon;
}


void HumanB::attack( void )
{	
	if (!weapon)
	{
		std::cout << "You have no weapon fool" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}