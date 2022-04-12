#include "Span.hpp"

Span::Span(unsigned int N)
{
    max = N;
    size = 0;
}

Span::Span(const Span &copy) 
{
    *this = copy;
}

Span::~Span(void) {}

Span &Span::operator=(const Span &copy) 
{
    this->arr = copy.arr;
    this->max = copy.max;
    this->size = copy.size;
    return *this;
}

void Span::addNumber(int num)
{
    if (size == max)
        throw FullSpan();
    size++;
    arr.push_back(num);
}

void Span::addRangeNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    while (start != end)
    {
        try {this->addNumber(*start);}
        catch (FullSpan &e)
        {
            std::cout << e.what() << std::endl;
            return ;
        }
        start++;
    }
}

unsigned int Span::shortestSpan(void) 
{
    if (size < 2)
        throw NoSpanFound();
    std::sort(arr.begin(), arr.end());
    int temp;
    int out = INT_FAST32_MAX;  
    for (unsigned int i = 1; i < size; i++)
    {
        temp = std::abs(arr[i] - arr[i-1]);
        if (temp < out)
            out = temp;
    }
    return out;
}

unsigned int Span::longestSpan(void) 
{
    if (size < 2)
        throw NoSpanFound();
    
    std::vector<int>::iterator min = std::min_element(arr.begin(), arr.end());
    std::vector<int>::iterator max = std::max_element(arr.begin(), arr.end());

    return (*max - *min);
}
