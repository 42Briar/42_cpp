#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main()
{
    ShrubberyCreationForm   f1("home");
    RobotomyRequestForm     f2("the internet") ;
    PresidentialPardonForm  f3("your mom");

    Bureaucrat b1("bob", 1);
    Bureaucrat b2("badbob", 150);

    std::cout << "//---------------------------------------//" << std::endl;
    b1.executeForm(f1);
    b1.executeForm(f2);
    b1.executeForm(f3);
    std::cout << "//---------------------------------------//" << std::endl;
    try{f1.beSigned(b2);}
    catch (Bureaucrat::GradeTooLowException &e) {std::cerr << e.what() << std::endl;}
    f1.beSigned(b1);
    f2.beSigned(b1);
    f3.beSigned(b1);
    b2.executeForm(f1);
    std::cout << "//---------------------------------------//" << std::endl;
    b1.executeForm(f1);
    b1.executeForm(f2);
    b1.executeForm(f3);
    system("cat *_shrubbery");
    std::cout << "//---------------------------------------//" << std::endl;

}