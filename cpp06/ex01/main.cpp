#include <stdint.h>
#include <iostream>

struct Data {
    int lol;
    int notlol;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main(void)
{
    Data *ptr = new Data();
    ptr->lol = 1;
    ptr->notlol = 0;

    std::cout << "original pointer: " << ptr << std::endl;
    uintptr_t temp = serialize(ptr);
    std::cout << "serialized pointer: " << temp << std::endl;
    Data *newptr = deserialize(temp);
    std::cout << "new deserialized pointer: " << newptr << std::endl;
    std::cout << "ptr == newptr returns: " << (ptr == newptr) << std::endl;
    std::cout << newptr->lol << "-"  << newptr->notlol << std::endl;

    delete newptr;
}
