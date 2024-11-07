#include "Span.hpp"
#include <numeric>

int main()
{
	try {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp1 = Span(1000);
	std::vector<int> numbers = {6, 3, 17, 9, 11, 55, 44, 33, 22, 11};
	sp1.addNumbers(numbers.begin(), numbers.end());
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

    Span sp2 = Span(1000);
    std::vector<int> range(500 ,1000);
    std::iota(range.begin(), range.end(), 1);
    sp2.addNumbers(range.begin(), range.end());
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

	Span sp3;

	std::cout << sp3.shortestSpan() << std::endl;
	}

	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}