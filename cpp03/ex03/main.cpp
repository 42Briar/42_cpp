#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	{
		DiamondTrap test("dmndtrp");

		test.guardGate();
		test.highFivesGuys();
		test.whoami();
		test.attack("target");
		test.takeDamage(50);
		test.beRepaired(20);
		test.takeDamage(100);
		test.attack("target2");
	}
}