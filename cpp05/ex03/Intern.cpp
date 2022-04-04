#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &copy) {(void)copy;}

Intern::~Intern(void) {}

Intern &Intern::operator=(const Intern &copy) 
{
    (void)copy;
    return *this;
}

Form *Intern::makeForm(std::string formtype, std::string target) 
{
    switch (formtype[0])
    {
        case('r'):
            return ((std::cout << "Intern creates RobotomyRequestForm" << std::endl), new RobotomyRequestForm(target));
        case('s'):
            return ((std::cout << "Intern creates ShrubberyCreationForm" << std::endl), new ShrubberyCreationForm(target));
        case('p'):
            return ((std::cout << "Intern creates PresidentialPardomForm" << std::endl), new PresidentialPardonForm(target));
        default:
            std::cout << "Thats not a valid form sir" << std::endl;
    }
    return NULL;
}
