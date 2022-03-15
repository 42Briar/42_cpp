#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string newname, Weapon &newweapon ): name(newname), weapon(newweapon)
{	

}

HumanA::~HumanA( void )
{

}

void HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
