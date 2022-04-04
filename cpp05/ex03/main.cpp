#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <iostream>

int main()
{
    Intern lol;

    Form *f1;
    f1 = lol.makeForm("robotomy request", "target");
    delete f1;
    f1 = lol.makeForm("presidential pardon", "target");
    delete f1;
    f1 = lol.makeForm("shrubbery creation", "target");
    delete f1;
    f1 = lol.makeForm("non existent", "target");



}