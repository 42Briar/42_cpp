#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(5, "dave");

	for (int i = 0; i < 5; i++)
	{
		std::cout << "(Zombie " << i << ") ";
		horde[i].announce();
	}
}