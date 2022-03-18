#ifndef FRAGTRAP_HPP_
# define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap(std::string newname);
	FragTrap(const FragTrap &newfragtrap);
	~FragTrap();
	FragTrap & operator=(const FragTrap &newfragtrap);

	void attack(const std::string &target);
	void highFivesGuys(void);
};

#endif