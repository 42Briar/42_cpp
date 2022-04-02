#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): t_name(target), Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy): t_name(copy.t_name), Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    *this = copy;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &lol) const
{
    if (getIsSigned())

}



