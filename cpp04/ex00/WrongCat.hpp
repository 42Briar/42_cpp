#ifndef WRONGCAT_HPP_
# define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat(void);
	WrongCat(const WrongCat &copy);
	~WrongCat(void);

	WrongCat & operator=(const WrongCat &copy);

	void MakeSound(void) const;

};

#endif