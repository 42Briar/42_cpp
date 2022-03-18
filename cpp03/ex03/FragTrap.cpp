#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string newname) : ClapTrap(newname)
{
    std::cout << "FragTrap Constructor called" << std::endl;
	setHp(100);
	setEp(100);
	setAdmg(30);
}

FragTrap::FragTrap(const FragTrap &newFragTrap) : ClapTrap(getname())
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = newFragTrap;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap deconstructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &newFragTrap) 
{
	setname(newFragTrap.getname());
	setHp(newFragTrap.getHp());
	setEp(newFragTrap.getEp());
	setAdmg(newFragTrap.getAdmg());

	return *this;
}

void FragTrap::attack(const std::string &target) 
{
	if (getEp() <= 0 || getHp() <= 0)
	{
		std::cout << "FragTrap " << getname() << " is incapable of attacking!" << std::endl;
		return ;
	}
	setEp(getEp() - 1);
    std::cout << "FragTrap " << getname() << " attacks " << target;
	std::cout << ", causing " << getAdmg() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getname() << " give a high five!" << std::endl;
}

