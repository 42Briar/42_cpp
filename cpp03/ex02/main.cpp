#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	{
		ScavTrap test("scvtrp");

		test.guardGate();
		test.attack("target");
		test.takeDamage(50);
		test.beRepaired(20);
		test.takeDamage(100);
		test.attack("target2");
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	{
		FragTrap test("frgtrp");

		test.highFivesGuys();
		test.attack("target");
		test.takeDamage(50);
		test.beRepaired(20);
		test.takeDamage(100);
		test.attack("target2");
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	{
		ClapTrap test("clptrp");

		test.attack("someone");
		test.takeDamage(5);
		test.beRepaired(5);
		test.takeDamage(10);
		test.attack("aaaaaa");
		test.takeDamage(10);
	}
}