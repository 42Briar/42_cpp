#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &copy);
    virtual ~ShrubberyCreationForm();
    
    ShrubberyCreationForm &operator= (const ShrubberyCreationForm &copy);

    void localexecute();

private:
    const std::string t_name;

};