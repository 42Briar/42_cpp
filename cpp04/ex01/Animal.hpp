#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"
#include <string>

class Animal {

public:
	virtual ~Animal(void);

	Animal & operator=(const Animal &copy);

	virtual void MakeSound(void) const;
	virtual Brain *getbrain(void) const;

protected:
	Animal(void);
	Animal(const Animal &copy);
	std::string type;

};

#endif