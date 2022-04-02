#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(std::string newname, int sg, int eg): name(newname), signgrade(sg), execgrade(eg), issigned(false)
{

}

Form::Form(const Form &copy): name(copy.name), signgrade(copy.signgrade), execgrade(copy.execgrade), issigned(copy.issigned) {}

Form::~Form(void) {}

Form &Form::operator=(const Form &copy) 
{
    //shit exercise mate this thing is useless
	issigned = copy.issigned;

	return *this;
}

bool Form::getIsSigned(void) const
{
    return issigned;
}

std::string Form::getName(void) const
{
    return name;
}

int Form::getSignGrade(void) const
{
    return signgrade;
}

int Form::getExecGrade(void) const
{
    return execgrade;
}

void Form::beSigned(const Bureaucrat &lol)
{
	if (lol.getGrade() > this->signgrade)
	{
		lol.signForm(*this);
		throw Bureaucrat::GradeTooLowException();
	}
	issigned = true;
	lol.signForm(*this);
}


std::ostream &operator<< (std::ostream &os, Form &copy)
{
	std::string temp = copy.getIsSigned() ? " is signed." : " is not signed.";
	os << "Form " << copy.getName() << temp << " It requires a grade of " << copy.getSignGrade() \
		<< " to be signed or a grade of " << copy.getExecGrade() << " to be executed." << std::endl;
	return os;
}
