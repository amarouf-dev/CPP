

#ifndef PMERGE
#define PMERGE

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe
{
    private:

    std::deque<int> deq;
    std::vector<int> vec;

    clock_t start;
    clock_t end;
    double duration;

    public :

    void SetVec(std::vector<int>);
    void SetDeq(std::deque<int>);

    void SortVector(void);
    void SortDeque(std::deque<int> &deq);

    std::vector<int> GetVec(void) const;
    std::deque<int> GetDeq(void) const;
};

#endif
