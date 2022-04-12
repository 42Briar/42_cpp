#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    MutantStack<int> mstack;
    std::cout << "Empty? " << mstack.empty() << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    std::cout << "Empty? " << mstack.empty() << std::endl;
    mstack.push(235);
    mstack.push(11234);    
    mstack.push(23);
    mstack.push(98);
    std::cout << "Top element: " << mstack.top() << std::endl;

    MutantStack<int>::iterator iter = mstack.begin();
    std::cout << *iter << std::endl;
    iter++;
    std::cout << *iter << std::endl;


    // std::list<int> mstack;
    // std::cout << "Empty? " << mstack.empty() << std::endl;
    // mstack.push_back(5);
    // mstack.push_back(17);
    // std::cout << "Top element: " << mstack.back() << std::endl;
    // mstack.pop_back();
    // std::cout << "Size after pop: " << mstack.size() << std::endl;
    // std::cout << "Empty? " << mstack.empty() << std::endl;
    // mstack.push_back(235);
    // mstack.push_back(11234);    
    // mstack.push_back(23);
    // mstack.push_back(98);
    // std::cout << "Top element: " << mstack.back() << std::endl;

    // std::list<int>::iterator iter = mstack.begin();
    // std::cout << *iter << std::endl;
    // iter++;
    // std::cout << *iter << std::endl;
}