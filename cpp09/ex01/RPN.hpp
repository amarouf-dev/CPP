

#ifndef RPN__
#define RPN__

#include <iostream>
#include <stack>
#include <string>

class RPN
{
    private:
    std::stack<int> r;

    public:
    void parsInput(std::string);
};

#endif
