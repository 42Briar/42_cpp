#include "ShrubberyCreationForm.hpp"
#include "fstream"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): t_name(target), Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy): t_name(copy.t_name), Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    *this = copy;
    return *this;
}

void ShrubberyCreationForm::localexecute()
{
    std::fstream file;

    file.open(t_name + "_shrubbery", std::fstream::out | std::fstream::trunc);
    file << "                                                        .\\
                                              .         ;  \\
                 .              .              ;%     ;;   \\
                   ,           ,                :;%  %;   \\
                    :         ;                   :;%;'     .,\\
           ,.        %;     %;            ;        %;'    ,;\\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \\
               ;%;      %;        ;%;        % ;%;  ,%;'\\
                `%;.     ;%;     %;'         `;%%;.%;'\\
                 `:;%.    ;%%. %@;        %; ;@%;%'                 \\
                    `:%;.  :;bd%;          %;@%;'\\
                      `@%:.  :;%.         ;@@%;'   \\
                        `@%.  `;@%.      ;@@%;         \\
                          `@%%. `@%%    ;@@%;                       \\
                            ;@%. :@%%  %@@%;       \\
                              %@bd%%%bd%%:;     \\
                                #@%%%%%:;;\\
                                %@@%%%::;\\
                                %@@@%(o);  . '         \\
                                %@@@o%;:(.,'         \\
                            `.. %@@@o%::;         \\
                               `)@@@o%::;         \\
                                %@@(o)::;        \\
                               .%@@@@%::;         \\
                               ;%@@@@%::;.          \\
                              ;%@@@@%%:;;;. \\
                          ...;%@@@@@%%:;;;;,..";

    file.close();
}

const char* Form::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
}

