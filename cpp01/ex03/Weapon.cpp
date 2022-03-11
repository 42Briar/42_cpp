#include "Weapon.hpp"

Weapon::Weapon( std::string newtype )
{
	type = newtype;
}

Weapon::Weapon( void )
{

}

Weapon::~Weapon( void )
{

}

const std::string& Weapon::getType( void )
{
	return this->type;
}

void Weapon::setType( const std::string& newtype )
{
	this->type = newtype;
}
