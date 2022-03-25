#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	Form lol("FORMNAME", 20, 10);
	Bureaucrat t1("bob", 149);
	Bureaucrat t2("betterbob", 5);

	std::cout << lol;
	try
	{
		lol.beSigned(t1);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		lol.beSigned(t2);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << lol;

}