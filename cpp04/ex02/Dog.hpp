#ifndef DOG_HPP_
# define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:
	Dog(void);
	Dog(const Dog &copy);
	~Dog(void);

	Dog & operator=(const Dog &copy);

	void MakeSound(void) const;
	Brain *getbrain(void) const;

private:
	Brain *brain;

};

#endif