#pragma once
#include "Form.hpp"
#include <string>
#include <iostream>

class Form;

class Bureaucrat {

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat(void);

	Bureaucrat &operator= (const Bureaucrat &copy);

	int getGrade(void) const;
	const std::string getName(void) const;
	void incGrade(void);
	void decGrade(void);

	void signForm(Form &lol) const;
	void executeForm(const Form &lol) const;

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

private:
	const std::string name;
	int grade;
};

std::ostream &operator<< (std::ostream &os, Bureaucrat &copy);