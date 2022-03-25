#include "Bureaucrat.hpp"
#include <iostream>


Bureaucrat::Bureaucrat(const std::string nname, int ngrade): name(nname)
{
	if (ngrade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (ngrade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = ngrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name)
{
	this->grade = copy.grade;
}

Bureaucrat::~Bureaucrat(void) 
{
    
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	this->grade = copy.grade;
	//cant copy name because its const so fuck me i guess
	return *this;
}

int Bureaucrat::getGrade(void) 
{
	return this->grade;
}

const std::string Bureaucrat::getName(void) 
{
    return this->name;
}

void Bureaucrat::incGrade(void)
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade -= 1;
}

void Bureaucrat::decGrade(void)
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade += 1;
}

std::ostream &operator<< (std::ostream &os, Bureaucrat &copy)
{
	os << copy.getName() << ", bureaucrat grade " << copy.getGrade();
	return os;
}


//-----------------exceptions------------------------//

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}