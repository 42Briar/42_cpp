#pragma once
#include <exception>
#include <iostream>
#include <algorithm>
#include <vector>

class Span {

public:
    Span(unsigned int N);
    Span(const Span &copy);
    ~Span(void);

    Span &operator=(const Span &copy);

    void addNumber(int num);
    void addRangeNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);

    class FullSpan: public std::exception
	{
		public:
			virtual const char* what() const throw()
            {
                return ("Span is already full");
            }
	};

    class NoSpanFound: public std::exception
	{
		public:
			virtual const char* what() const throw()
            {
                return ("No span could be found");
            }
	};

private:
    Span(void);
    std::vector<int> arr;
    unsigned int size;
    unsigned int max;
};
