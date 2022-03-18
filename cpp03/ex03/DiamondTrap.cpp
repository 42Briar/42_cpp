#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string newname) : ClapTrap(newname + "_clap_name"), ScavTrap(newname + "_clap_name"), FragTrap(newname + "_clap_name")
{
   	std::cout << "DiamondTrap constructor called" << std::endl;
	name = newname;
	this->setHp(this->FragTrap::getHp());
	this->setEp(this->ScavTrap::getEp());
	this->setAdmg(this->FragTrap::getAdmg());

}

DiamondTrap::DiamondTrap(const DiamondTrap &newdtrap) : ClapTrap(newdtrap.getname() + "_clap_name"), ScavTrap(newdtrap.getname() + "_clap_name"), FragTrap(newdtrap.getname() + "_clap_name")
{
   	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = newdtrap; 
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "DiamondTrap deconstructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &newdtrap) 
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	name = newdtrap.getname();
	this->setHp(newdtrap.getHp());
	this->setEp(newdtrap.getEp());
	this->setAdmg(newdtrap.getAdmg());
    return *this;
}

void DiamondTrap::whoami(void)
{
	std::cout << "My name is " << name << "...";
	std::cout << " But my name also is " << ClapTrap::getname() << std::endl;

}
