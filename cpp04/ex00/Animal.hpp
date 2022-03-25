#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {

public:
	Animal(void);
	Animal(const Animal &copy);
	virtual ~Animal(void);

	Animal & operator=(const Animal &copy);

	virtual void MakeSound(void) const;


protected:
	std::string type;

};

#endif