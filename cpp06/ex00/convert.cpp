#include "head.hpp"

void charconvert(std::string arg)
{
    std::cout << "char: \'" << arg[1] << "\'" << std::endl;
    std::cout << "int: " << static_cast<int>(arg[1]) << std::endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(arg[1]) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(arg[1]) << std::endl;
}

void intconvert(std::string arg)
{
    long int i = std::strtol(arg.c_str(), NULL, 10);
    if (i > INT_MAX || i < INT_MIN)
    {
        std::cout << "Integer value overflowed" << std::endl;
        return ;
    }
    if (isprint(i))
        std::cout << "char: \'" << static_cast<char>(i) << "\'" << std::endl;
    else
        std::cout << "char: impossible to display" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;

}

void floatconvert(std::string arg)
{
    double out = std::atof(arg.c_str());
    if (isprint(out) && arg != "-inff" && arg != "+inff" && arg != "nanf")
        std::cout << "char: \'" << static_cast<char>(out) << "\'" << std::endl;
    else
        std::cout << "char: impossible to display" << std::endl;
    if (arg == "-inff" || arg == "+inff" || arg == "nanf" || out > static_cast<double>(INT_MAX) || out < static_cast<double>(INT_MIN))
        std::cout << "int: impossible to display" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(out) << std::endl;
    if ((static_cast<int>(out * 10) % 10) == 0)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
    }
    std::cout << "float: " << out << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(out) << std::endl;
}

void doubleconvert(std::string arg)
{
    double out = std::atof(arg.c_str());
    if (isprint(out) && arg != "-inf" && arg != "+inf" && arg != "nan")
        std::cout << "char: \'" << static_cast<char>(out) << "\'" << std::endl;
    else
        std::cout << "char: impossible to display" << std::endl;
    if (arg == "-inf" || arg == "+inf" || arg == "nan" || out > static_cast<double>(INT_MAX) || out < static_cast<double>(INT_MIN))
        std::cout << "int: impossible to display" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(out) << std::endl;
    if ((static_cast<int>(out * 10) % 10) == 0)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
    }
    std::cout << "float: " << static_cast<float>(out) << "f" << std::endl;
    std::cout << "double: " << out << std::endl;
}