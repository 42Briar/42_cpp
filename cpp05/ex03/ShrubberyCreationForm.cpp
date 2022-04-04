#include "ShrubberyCreationForm.hpp"
#include "fstream"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), t_name(target)  {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), t_name(copy.t_name)  {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    t_name = copy.t_name;
    return *this;
}

void ShrubberyCreationForm::localexecute() const
{
    std::fstream file;

    file.open(t_name + "_shrubbery", std::fstream::out | std::fstream::trunc);
    file << "                                                        .      \n"
    "                                          .         ;                  \n"
    "             .              .              ;%     ;;                   \n"
    "               ,           ,                :;%  %;                    \n"
    "                :         ;                   :;%;'     .,             \n"
    "       ,.        %;     %;            ;        %;'    ,;               \n"
    "         ;       ;%;  %%;        ,     %;    ;%;    ,%'                \n"
    "          %;       %;%;      ,  ;       %;  ;%;   ,%;'                 \n"
    "           ;%;      %;        ;%;        % ;%;  ,%;'                   \n"
    "            `%;.     ;%;     %;'         `;%%;.%;'                     \n"
    "             `:;%.    ;%%. %@;        %; ;@%;%'                        \n"
    "                `:%;.  :;bd%;          %;@%;'                          \n"
    "                  `@%:.  :;%.         ;@@%;'                           \n"
    "                    `@%.  `;@%.      ;@@%;                             \n"
    "                      `@%%. `@%%    ;@@%;                              \n"
    "                        ;@%. :@%%  %@@%;                               \n"
    "                          %@bd%%%bd%%:;                                \n"
    "                            #@%%%%%:;;                                 \n"
    "                            %@@%%%::;                                  \n"
    "                            %@@@%(o);  . '                             \n"
    "                            %@@@o%;:(.,'                               \n"
    "                        `.. %@@@o%::;                                  \n"
    "                           `)@@@o%::;                                  \n"
    "                            %@@(o)::;                                  \n"
    "                           .%@@@@%::;                                  \n"
    "                           ;%@@@@%::;.                                 \n"
    "                          ;%@@@@%%:;;;.                                \n"
    "                      ...;%@@@@@%%:;;;;,..                             \n";

    file.close();
}
