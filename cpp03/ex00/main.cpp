#include "ClapTrap.hpp"

int main()
{
	ClapTrap test("lolwut");


	test.attack("someone");
	test.takeDamage(5);
	test.beRepaired(5);
	test.takeDamage(10);
	test.attack("aaaaaa");
	test.takeDamage(10);
}