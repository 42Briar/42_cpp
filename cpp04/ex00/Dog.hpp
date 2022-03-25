#ifndef DOG_HPP_
# define DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog(void);
	Dog(const Dog &copy);
	~Dog(void);

	Dog & operator=(const Dog &copy);

	void MakeSound(void) const;

};

#endif