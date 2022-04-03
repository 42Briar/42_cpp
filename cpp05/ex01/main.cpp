#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	Form lol("FORMNAME", 20, 10);
	Bureaucrat t1("bob", 149);
	Bureaucrat t2("betterbob", 5);

	std::cout << lol;
	t1.signForm(lol);
	t2.signForm(lol);
	std::cout << lol;

}