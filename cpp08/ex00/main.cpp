#include "easyfind.hpp"
#define FIND 1234
#define NF -9

int main()
{
    int	const			amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576, 1234 };
	size_t const		amounts_size( sizeof(amounts) / sizeof(int) );

    std::cout << "//------------------------------Vector test------------------------------//" << std::endl;
    std::vector<int>    tvec(amounts, amounts+amounts_size);
    std::vector<int>::iterator tvf = easyfind(tvec, FIND);
    std::cout << "Easyfind found " << *tvf << " at index " << std::distance(tvec.begin(), tvf) << std::endl;
    std::vector<int>::iterator tvnf = easyfind(tvec, NF);
    std::cout << "Easyfind didnt find the value, thus index is set to last: " << std::distance(tvec.begin(), tvnf) << std::endl;

    std::cout << "\n//------------------------------Deque test------------------------------//" << std::endl;
    std::deque<int> tdeq(amounts, amounts+amounts_size);
    std::deque<int>::iterator tdf = easyfind(tdeq, FIND);
    std::cout << "Easyfind found " << *tdf << " at index " << std::distance(tdeq.begin(), tdf) << std::endl;
    std::deque<int>::iterator tdnf = easyfind(tdeq, NF);
    std::cout << "Easyfind didnt find the value, thus index is set to last: " << std::distance(tdeq.begin(), tdnf) << std::endl;

    std::cout << "\n//------------------------------List test------------------------------//" << std::endl;
    std::list<int> tlist(amounts, amounts+amounts_size);
    std::list<int>::iterator tlf = easyfind(tlist, FIND);
    std::cout << "Easyfind found " << *tlf << " at index " << std::distance(tlist.begin(), tlf) << std::endl;
    std::list<int>::iterator tlnf = easyfind(tlist, NF);
    std::cout << "Easyfind didnt find the value, thus index is set to last: " << std::distance(tlist.begin(), tlnf) << std::endl;

}