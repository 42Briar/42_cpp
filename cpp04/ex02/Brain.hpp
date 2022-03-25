#ifndef BRAIN_HPP_
# define BRAIN_HPP_

#include <string>

class Brain {

public:
	Brain(void);
	Brain(const Brain &copy);
	virtual ~Brain(void);

	Brain & operator=(const Brain &copy);

	std::string ideas[100];

};

#endif