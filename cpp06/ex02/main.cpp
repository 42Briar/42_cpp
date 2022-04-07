#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

Base *generate(void)
{
    std::srand(time(NULL));

    int temp = std::rand() % 3;
    switch (temp)
    {
        case(0):
            return new A();
        case(1):
            return new B();
        case(2):
            return new C();
    }
    return NULL;
}

void identify(Base *p)
{
    A *aptr = dynamic_cast<A *>(p);
    if (aptr)
        std::cout << "Pointertype is A" << std::endl;
    B *bptr = dynamic_cast<B *>(p);
    if (bptr)
        std::cout << "Pointertype is B" << std::endl;
    C *cptr = dynamic_cast<C *>(p);
    if (cptr)
        std::cout << "Pointertype is C" << std::endl;
}

void identify(Base &p)
{
    try 
    {
        A &aptr = dynamic_cast<A &>(p); 
        (void)aptr; 
        std::cout << "Reftype is A" << std::endl;
    } catch (std::bad_cast &e) {}
    try 
    {
        B &aptr = dynamic_cast<B &>(p); 
        (void)aptr; 
        std::cout << "Reftype is B" << std::endl;
    } catch (std::bad_cast &e) {}
    try 
    {
        C &aptr = dynamic_cast<C &>(p); 
        (void)aptr; 
        std::cout << "Reftype is C" << std::endl;
    } catch (std::bad_cast &e) {}
}

int main(void)
{
    Base *ptr = generate();
    Base &ref = *ptr;

    identify(ptr);
    identify(ref);

    delete ptr;
}
