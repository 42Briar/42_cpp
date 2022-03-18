#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string newname);
	ScavTrap(const ScavTrap &newscavtrap);
	~ScavTrap();
	ScavTrap & operator=(const ScavTrap &newscavtrap);

	void guardGate(void);


};

#endif