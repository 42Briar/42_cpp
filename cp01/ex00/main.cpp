#include "Zombie.hpp"

int main(void)
{
	std::cout << "Stack allocated zombie:" << std::endl;
	randomChump("dave");
	std::cout << "-----------------------" << std::endl;
	std::cout << "Heap allocated zombie:" << std::endl;
	Zombie *zombie = newZombie("dave2");
	delete zombie;
}