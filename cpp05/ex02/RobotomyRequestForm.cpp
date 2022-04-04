#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), t_name(target)  {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), t_name(copy.t_name)  {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    t_name = copy.t_name;
    return *this;
}

void RobotomyRequestForm::localexecute() const
{
    std::srand(time(NULL));

    int temp = std::rand() % 2;
    if (temp)
    {
        std::cout << "* brrrrrrrrrrrrrrrrrrrrrrrr *\n" << t_name << " has been succesfully robotomized" << std::endl;
        return;
    }
    std::cout << "* brrrrrrrrrrrrrrrrrrrrrrrr *\n" << "robotomy has failed" << std::endl;
}

