#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            if (islower(av[i][j]))
                std::cout << (char)toupper(av[i][j]);
            else
                std::cout << av[i][j];            
        }
    }
    std::cout << "\n";
    return 0;
}