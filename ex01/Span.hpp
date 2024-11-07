#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <climits>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int _n;
	std::vector <int> _array;

public:

	Span();
	Span(unsigned int n);
	Span(const Span &span);
	~Span();
	Span &operator=(const Span &span);

	void addNumber(int number);
	void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
};

#endif 