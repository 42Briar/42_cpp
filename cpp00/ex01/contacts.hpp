#ifndef CONTACTS_HPP_
# define CONTACTS_HPP_

#include <string>


class Contacts {

public:
	Contacts ( void );
	~Contacts ( void );

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;
	bool store;

	void storeinfo( void );
	void display( int index );
	void dispfull( void );

};

#endif