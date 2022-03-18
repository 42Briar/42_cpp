#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

#include <string>

class ClapTrap {

public:
	ClapTrap(std::string newname);
	ClapTrap(const ClapTrap &newclaptrap);
	~ClapTrap(void);

	ClapTrap &operator= (const ClapTrap &newclaptrap);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


private:
	std::string name;
	int Hpoints;
	int Epoints;
	int ATKdmg;

};


#endif