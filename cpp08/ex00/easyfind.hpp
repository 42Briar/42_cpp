#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <iostream>

template <typename T> typename T::iterator easyfind(T &arr, int find)
{
   return (std::find(arr.begin(), arr.end(), find));
}