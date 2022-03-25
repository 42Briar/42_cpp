#ifndef CAT_HPP_
# define CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal {

public:
	Cat(void);
	Cat(const Cat &copy);
	~Cat(void);

	Cat & operator=(const Cat &copy);

	void MakeSound(void) const;

};

#endif