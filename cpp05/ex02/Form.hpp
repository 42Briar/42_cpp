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
	int getSignGrade(void);
	int getExecGrade(void);

	void beSigned(const Bureaucrat &lol);
	virtual void execute(const Bureaucrat &lol) const = 0;

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

private:
	const std::string name;
	const int signgrade;
	const int execgrade;
	bool issigned;

};

std::ostream &operator<< (std::ostream &os, Form &copy);
