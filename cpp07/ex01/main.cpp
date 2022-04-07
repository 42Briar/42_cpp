#include "iter.hpp"
#include <iostream>

template <class name>
void print(name var)
{
    std::cout << var << std::endl;
}

int main()
{
    int *intarr = new int[10];
    for (int i = 0; i < 10; i++)
        intarr[i] = i;
    iter(intarr, 10, &print);

    char *chararr = new char[10];
    for (int i = 0; i < 10; i++)
        chararr[i] = 'a' + i;
    iter(chararr, 10, &print);
}