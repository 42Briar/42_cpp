#include "head.hpp"

bool checkC(std::string s)
{
    return (s.size() == 3 && s[0] == '\'' && s[2] == '\'');
}

bool checkI(std::string s)
{
    if (s.back() == 'f' || s.find(".", 0) != std::string::npos)
        return false;
    std::string::size_type found = s.find_first_not_of("0123456789", 0);
    std::string::size_type last = s.find_last_not_of("0123456789");
    if (found != std::string::npos)
    {
        if ((found == 0 && last == 0) && (s[0] == '-' || s[0] == '+'))
            return (true);
        return (false);
    }
    return (true);
}

bool checkF(std::string s)
{
    if (s == "-inff" || s == "+inff" || s == "nanf")
        return (true);
    if (s.find("f", 0) == std::string::npos || s.find(".", 0) == std::string::npos)
        return (false);
    for (int i = 0; s[i]; i++)
        if (!isdigit(s[i]) && s[i] != 'f' && s[i] != '.')
            return (false);
    if (s.find("f", 0) == s.size() - 1 && s.find(".") != 0 && s.find(".") != s.size() - 2)
        return (true);
    return (false);

}

bool checkD(std::string s)
{
    if (s == "-inf" || s == "+inf" || s == "nan")
        return (true);
    if (s.find(".", 0) == std::string::npos)
        return (false);
    for (int i = 0; s[i]; i++)
        if (!isdigit(s[i]) && s[i] != '.')
            return (false);
    std::string::size_type found = s.find_first_not_of("0123456789", 0);
    std::string::size_type last = s.find_last_not_of("0123456789");
    if (found != last || s[found] != '.')
        return (false);
    return (true);
}

int gettype(std::string arg)
{
    if (checkC(arg))
        return CHAR;
    if (checkI(arg))
        return INT;
    if (checkF(arg))
        return FLOAT;
    if (checkD(arg))
        return DOUBLE;
    return NO;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "Wrong number of parameters" << std::endl, 0);
    std::string arg = av[1];
    int type = gettype(arg);
    switch (type)
    {
        case(NO):
            return (std::cerr << "No valid type found" << std::endl, 0);
        case(CHAR): charconvert(arg);
            break;
        case(INT): intconvert(arg);
            break;
        case(FLOAT): floatconvert(arg);
            break;
        case(DOUBLE): doubleconvert(arg);
            break;
    }
    

    //static_cast<int>(val)
    //cast then cast back to check for overflow
    
}