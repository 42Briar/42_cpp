#ifndef DIAMONDTRAP_HPP_
# define DIAMONDTRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
	DiamondTrap(std::string newname);
	DiamondTrap(const DiamondTrap &newdtrap);
	~DiamondTrap(void);

	DiamondTrap &operator= (const DiamondTrap &newdtrap);

	using ScavTrap::attack;
	void whoami(void);

private:
	std::string name;

};

#endif