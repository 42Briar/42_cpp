#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string newname): name(newname)
{
	std::cout << "Constructor called" << std::endl;
	Hpoints = 10;
	Epoints = 10;
	ATKdmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &newclaptrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = newclaptrap;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &newclaptrap)
{
	Hpoints = 10;
	Epoints = 10;
	ATKdmg = 0;
	name = newclaptrap.name;

	return *this;
}

ClapTrap::~ClapTrap(void) 
{
	std::cout << "Deconstructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) 
{
	if (Epoints == 0 || Hpoints == 0)
	{
		std::cout << "Claptrap " << name << " is incapable of attacking!" << std::endl;
		return ;
	}
	Epoints -= 1;
    std::cout << "Claptrap " << name << " attacks " << target;
	std::cout << ", causing " << ATKdmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (Hpoints == 0)
	{
		std::cout << "STOP HES ALREADY DEAD" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << name << " takes " << amount << " points of damage!" << std::endl;
	Hpoints -= amount;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (Epoints == 0 || Hpoints == 0)
	{
		std::cout << "Claptrap " << name << " is incapable of repairing!" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << name << " repairs " << amount << " points of damage!" << std::endl;
	Hpoints += amount;
	Epoints -= 1;
	return ;
}

int ClapTrap::getHp(void) const
{
	return Hpoints;
}

int ClapTrap::getEp(void) const
{
	return Epoints;
}

int ClapTrap::getAdmg(void) const
{
	return ATKdmg;
}

void ClapTrap::setHp(int hp)
{
	Hpoints = hp;
}

void ClapTrap::setEp(int ep)
{
	Epoints = ep;
}

void ClapTrap::setAdmg(int admg)
{
	ATKdmg = admg;
}

std::string ClapTrap::getname(void) const
{
	return name;
}

void ClapTrap::setname(std::string newname)
{
	name = newname;
}
