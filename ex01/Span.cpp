#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &span) : _n(span._n), _array(span._array) {}

Span::~Span() {}

Span &Span::operator=(const Span &span)
{
    if (this != &span) // Check for self-assignment
    {
        _n = span._n;
        _array = span._array; // std::vector's assignment operator performs a deep copy
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (_array.size() >= _n)
        throw std::out_of_range("Span is full");
    _array.push_back(number);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (std::distance(begin, end) + _array.size() > _n)
        throw std::out_of_range("Adding these numbers would exceed the span's capacity");
    _array.insert(_array.end(), begin, end);
}

int Span::shortestSpan()
{
    if (_array.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    std::vector<int> sortedArray = _array;
    std::sort(sortedArray.begin(), sortedArray.end());

    int shortest = INT_MAX;
    for (size_t i = 1; i < sortedArray.size(); ++i)
    {
        int span = sortedArray[i] - sortedArray[i - 1];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan()
{
    if (_array.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    int min = *std::min_element(_array.begin(), _array.end());
    int max = *std::max_element(_array.begin(), _array.end());

    return max - min;
}