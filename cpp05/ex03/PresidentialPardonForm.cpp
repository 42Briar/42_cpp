#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), t_name(target)  {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), t_name(copy.t_name)  {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    t_name = copy.t_name;
    return *this;
}

void PresidentialPardonForm::localexecute() const
{
    std::cout << t_name << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

