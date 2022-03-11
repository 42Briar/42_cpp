#include "Zombie.hpp"
#include <iomanip>

int main(void)
{
	Zombie *horde = zombieHorde(5, "dave");

	for (int i = 0; i < 5; i++)
	{
		std::cout << "(Zombie " << i+1 << ") ";
		horde[i].announce();
	}
	delete [] horde;
}
