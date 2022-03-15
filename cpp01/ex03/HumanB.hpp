#ifndef HUMANB_HPP_
# define HUMANB_HPP_

#include <string>
#include "Weapon.hpp"

class HumanB {

public:
	HumanB( std::string newname );
	HumanB( void );
	~HumanB( void );

	void attack( void );
	void setWeapon( Weapon &newweapon );

private:
	std::string name;
	Weapon *weapon;
};


#endif