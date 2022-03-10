#ifndef CONTACTS_HPP_
# define CONTACTS_HPP_

#include <string>


class Contacts {

public:
	Contacts ( void );
	~Contacts ( void );

	void storeinfo( void );
	void display( int index );
	void dispfull( void );
	bool checkstore( void );

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;
	bool store;
};

#endif