#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal(void);

	WrongAnimal & operator=(const WrongAnimal &copy);

	void MakeSound(void) const;


protected:
	std::string type;

};

#endif