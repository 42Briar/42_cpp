#pragma once

template <class name>
void iter(name *arr, int len, void(*func)(name var))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}