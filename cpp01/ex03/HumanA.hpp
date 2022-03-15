#ifndef HUMANA_HPP_
# define HUMANA_HPP_

#include <string>
#include "Weapon.hpp"

class HumanA {

public:
	HumanA( std::string newname, Weapon &newweapon );
	~HumanA( void );

	void attack( void );

private:
	std::string name;
	Weapon& weapon;
};


#endif