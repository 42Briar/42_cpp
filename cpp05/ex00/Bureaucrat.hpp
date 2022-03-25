#pragma once

#include <string>
#include <iostream>

class Bureaucrat {

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat(void);

	Bureaucrat &operator= (const Bureaucrat &copy);

	int getGrade(void);
	const std::string getName(void);
	void incGrade(void);
	void decGrade(void);

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
	int grade;
};

std::ostream &operator<< (std::ostream &os, Bureaucrat &copy);