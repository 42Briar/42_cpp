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

protected:
	int getHp(void) const;
	int getEp(void) const;
	int getAdmg(void) const;
	void setHp(int hp);
	void setEp(int ep);
	void setAdmg(int admg);
	std::string getname(void) const;
	void setname(std::string newname);

private:
	std::string name;
	int Hpoints;
	int Epoints;
	int ATKdmg;

};


#endif