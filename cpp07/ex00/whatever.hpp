#pragma once

template<class name>
void swap(name &a, name &b)
{
    name temp = a;
    a = b;
    b = temp;
}

template<class name>
name min(name a, name b)
{
    return (a > b ? b : a);
}

template<class name>
name max(name a, name b)
{
    return (a > b ? a : b);
}


