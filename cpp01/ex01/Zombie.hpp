#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

#include <string>
#include <iostream>

class Zombie {

public:

	Zombie(std::string name);	
	Zombie(void);
	~Zombie(void);

	void announce(void);
	void setname(std::string name);

private:

	std::string name;

};

Zombie* zombieHorde(int N, std::string name);

#endif