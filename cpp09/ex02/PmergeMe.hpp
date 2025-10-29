

#ifndef PMERGE
#define PMERGE

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
    private:

    std::deque<int> deq;
    std::vector<int> vec;

    clock_t start;
    clock_t end;
    double duration;

    void SortVector(std::vector<int> &vec);
    void SortDeque(std::deque<int> &deq);

    public :

    void SetVec(std::vector<int>);
    void SetDeq(std::deque<int>);

    std::vector<int> GetVec(void) const;
    std::deque<int> GetDeq(void) const;
};

#endif
