#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	std::cout << "|---------------------standard---------------------|" << std::endl;
	Bureaucrat t1("dave", 88);
	std::cout << t1 << std::endl;
	std::cout << "|---------------------exceptions---------------------|" << std::endl;
	try
	{
		Bureaucrat t2("dave2", 999);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
		Bureaucrat t2("dave2", -999);
	}
	catch (Bureaucrat::GradeTooHighException &e) 
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "|---------------------increment/decrement test---------------------|" << std::endl;
	try
	{
		Bureaucrat t2("dave2", 2);
		std::cout << t2 << std::endl;
		t2.incGrade();
		std::cout << t2.getGrade() << std::endl;
		t2.incGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat t2("dave2", 149);
		std::cout << t2 << std::endl;
		t2.decGrade();
		std::cout << t2.getGrade() << std::endl;
		t2.decGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}