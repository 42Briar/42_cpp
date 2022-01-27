#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string n): name(n)
{

}

Zombie::~Zombie(void)
{
	Zombie::announce();
}

void Zombie::announce(void)
{
	std::cout << this->name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name)
{
	this->name = name;
}