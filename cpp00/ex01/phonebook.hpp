#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

#include "contacts.hpp"



class Phonebook {

public:
	Phonebook ( void );
	~Phonebook ( void );

	void add( void );
	void search( void );

private:
	Contacts entries[8];
};

#endif