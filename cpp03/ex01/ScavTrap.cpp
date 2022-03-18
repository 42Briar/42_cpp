#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string newname) : ClapTrap(newname)
{
    std::cout << "Scavtrap Constructor called" << std::endl;
	setHp(100);
	setEp(50);
	setAdmg(20);
}

ScavTrap::ScavTrap(const ScavTrap &newscavtrap) : ClapTrap(getname())
{
	std::cout << "Scavtrap Copy constructor called" << std::endl;
	*this = newscavtrap;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "Scavtrap deconstructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &newscavtrap) 
{
	setname(newscavtrap.getname());
	setHp(newscavtrap.getHp());
	setEp(newscavtrap.getEp());
	setAdmg(newscavtrap.getAdmg());

	return *this;
}

void ScavTrap::guardGate(void) 
{
    
}

