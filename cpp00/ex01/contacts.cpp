#include "contacts.hpp"
#include <iostream>
#include <iomanip>

Contacts::Contacts ( void )
{
	this->store = false;
}

Contacts::~Contacts ( void )
{

}

void Contacts::storeinfo ( void )
{
	this->store = true;
	std::cout << "Enter first name: ";
	std::cin >> this->first_name;
	std::cout << "Enter last name: ";
	std::cin >> this->last_name;
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter phone number: ";
	std::cin >> this->phone_number;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->secret;
	std::cout << "Contact added!" << std::endl;
}

void Contacts::display ( int index )
{
	if (!this->store)
		return;
	std::cout << "|" << std::setw(10) << std::right << index << "|";
	if (this->first_name.length() > 10)
		std::cout << std::setw(9) << std::right << this->first_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << std::right << this->first_name.substr(0, 10) << "|";
	if (this->last_name.length() > 10)
		std::cout << std::setw(9) << std::right << this->last_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << std::right << this->last_name.substr(0, 10) << "|";
	if (this->nickname.length() > 10)
		std::cout << std::setw(9) << std::right << this->nickname.substr(0, 9) << "." << "|" << std::endl;
	else
		std::cout << std::setw(10) << std::right << this->nickname.substr(0, 10) << "|" << std::endl;
}

void Contacts::dispfull ( void )
{
	if (!this->store)
	{
		std::cout << "No contact saved at this index" << std::endl;
		return;
	}
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Secret: " << this->secret << std::endl;
}