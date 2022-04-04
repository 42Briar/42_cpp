#pragma once
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <string>

class Intern {

public:
	Intern(void);
	Intern(const Intern &copy);
	~Intern(void);

	Intern &operator= (const Intern &copy);

    Form *makeForm(std::string formtype, std::string target);
};