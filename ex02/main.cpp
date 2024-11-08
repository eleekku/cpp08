#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <deque>

void testPairStack()
{
    MutantStack<std::pair<int, std::string>> mstack;
    mstack.push(std::make_pair(1, "one"));
    mstack.push(std::make_pair(2, "two"));
    mstack.push(std::make_pair(3, "three"));

    std::cout << "Top element: (" << mstack.top().first << ", " << mstack.top().second << ")" << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(std::make_pair(4, "four"));
    mstack.push(std::make_pair(5, "five"));

    MutantStack<std::pair<int, std::string>>::iterator it = mstack.begin();
    MutantStack<std::pair<int, std::string>>::iterator ite = mstack.end();
    while (it != ite)
    {
        std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
        ++it;
    }
}

void testDoubleStack()
{
MutantStack<double> mstack;
mstack.push(5.5);
mstack.push(17.17);
std::cout << "Top element: " << mstack.top() << std::endl;
mstack.pop();
std::cout << "Size after pop: " << mstack.size() << std::endl;
mstack.push(3.3);
mstack.push(5.5);
mstack.push(737.737);
mstack.push(0.0);

MutantStack<double>::iterator it = mstack.begin();
MutantStack<double>::iterator ite = mstack.end();
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
}

void testStringStack()
{
MutantStack<std::string> mstack;
mstack.push("Hello");
mstack.push("World");
std::cout << "Top element: " << mstack.top() << std::endl;
mstack.pop();
std::cout << "Size after pop: " << mstack.size() << std::endl;
mstack.push("C++");
mstack.push("MutantStack");
mstack.push("Test");
mstack.push("!");

MutantStack<std::string>::iterator it = mstack.begin();
MutantStack<std::string>::iterator ite = mstack.end();
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
}

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
std::cout << "std::stack test" << std::endl;
// std list test
std::list<int> lst;
lst.push_back(5);
lst.push_back(17);
std::cout << lst.back() << std::endl;
lst.pop_back();
std::cout << lst.size() << std::endl;
lst.push_back(3);
lst.push_back(5);
lst.push_back(737);
lst.push_back(0);
std::list<int>::iterator it1 = lst.begin();
std::list<int>::iterator ite2 = lst.end();
++it1;
--it1;
while (it1 != ite2)
{
	std::cout << *it1 << std::endl;
	++it1;
}

std::cout << "Testing double stack:" << std::endl;
testDoubleStack();
std::cout << "Testing string stack:" << std::endl;
testStringStack();
std::cout << "Testing pair stack:" << std::endl;
testPairStack();

return 0;
}