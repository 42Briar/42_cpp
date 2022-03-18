#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string newname) : ClapTrap(newname)
{
    std::cout << "Scavtrap Constructor called" << std::endl;
	setHp(100);
	setEp(50);
	setAdmg(20);
}

ScavTrap::ScavTrap(const ScavTrap &newscavtrap) : ClapTrap(newscavtrap.getname())
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

void ScavTrap::attack(const std::string &target) 
{
	if (getEp() <= 0 || getHp() <= 0)
	{
		std::cout << "Scavtrap " << getname() << " is incapable of attacking!" << std::endl;
		return ;
	}
	setEp(getEp() - 1);
    std::cout << "Scavtrap " << getname() << " attacks " << target;
	std::cout << ", causing " << getAdmg() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) 
{
    std::cout << "Scavtrap " << getname() << " is now in guard mode." << std::endl;
}

