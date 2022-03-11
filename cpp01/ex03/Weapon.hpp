#ifndef WEAPON_HPP_
# define WEAPON_HPP_
#include <string>

class Weapon {

public:
	Weapon( std::string newtype );
	Weapon( void );
	~Weapon( void );

	const std::string& getType( void );
	void setType( const std::string& newtype );

private:
	std::string type;
};

#endif