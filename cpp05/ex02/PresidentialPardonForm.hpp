#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &copy);
    virtual ~PresidentialPardonForm();
    
    PresidentialPardonForm &operator= (const PresidentialPardonForm &copy);


private:
    std::string t_name;
    void localexecute() const;
};