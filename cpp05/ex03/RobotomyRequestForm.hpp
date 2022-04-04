#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &copy);
    virtual ~RobotomyRequestForm();
    
    RobotomyRequestForm &operator= (const RobotomyRequestForm &copy);

private:
    std::string t_name;
    void localexecute() const;
};