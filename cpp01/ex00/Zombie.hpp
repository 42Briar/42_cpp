#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

#include <string>
#include <iostream>

class Zombie {

public:

	Zombie(std::string name);
	~Zombie(void);

	void announce(void);

private:

	std::string name;

};

Zombie* newZombie(std::string name);
void randomChump( std::string name);

#endif