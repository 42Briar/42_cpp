#pragma once
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form {

public:
	Form(std::string newname, int newgrade, int execgrade);
	Form(const Form &copy);
	~Form(void);

	Form &operator= (const Form &copy);

	bool getIsSigned(void);
	std::string getName(void);
	int getExecGrade(void);
	int getSignGrade(void);

	void beSigned(const Bureaucrat &lol);
	void execute(const Bureaucrat &lol);

	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

protected:
	virtual void localexecute() = 0;

private:
	const std::string name;
	const int signgrade;
	const int execgrade;
	bool issigned;

};

std::ostream &operator<< (std::ostream &os, Form &copy);
