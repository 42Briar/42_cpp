#include "Span.hpp"
#include <time.h>
#include <stdlib.h>


int main()
{
    std::cout << "//------------------------------Basic test------------------------------//" << std::endl;
    Span sp = Span(50);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    int	const			amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576, 1234 };
	size_t const		amounts_size( sizeof(amounts) / sizeof(int) );
    std::vector<int>    range(amounts, amounts+amounts_size);
    sp.addRangeNumbers(range.begin(), range.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n//------------------------------100k Span test------------------------------//" << std::endl;
    Span bigsp = Span(100000);

    srand(time(NULL));
    for (int i = 0; i < 100000; i++)
        bigsp.addNumber(rand());

    try {bigsp.addNumber(1);}
    catch (Span::FullSpan &e){
        std::cout << e.what() << std::endl;}
    std::cout << bigsp.shortestSpan() << std::endl;
    std::cout << bigsp.longestSpan() << std::endl;
}