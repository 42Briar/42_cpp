#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		ScavTrap idk("scvtrp");

		idk.guardGate();
		idk.attack("target");
		idk.takeDamage(50);
		idk.beRepaired(20);
		idk.takeDamage(100);
		idk.attack("target2");
	}
	{
		ClapTrap test("lolwut");

		test.attack("someone");
		test.takeDamage(5);
		test.beRepaired(5);
		test.takeDamage(10);
		test.attack("aaaaaa");
		test.takeDamage(10);
	}
}