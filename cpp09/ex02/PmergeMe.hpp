

#ifndef PMERGE
#define PMERGE

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

class PmergeMe
{
    private:

    std::deque<int> deq;
    std::vector<int> vec;

    std::time_t start;
    std::time_t end;
    double deq_duration;
    double vec_duration;

    public :

    void SetVec(std::vector<int>);
    void SetDeq(std::deque<int>);

    void SortVector(void);
    void SortDeque(void);

    double GetDeqTime();
    double GetVecTime();

    std::vector<int> GetVec(void) const;
    std::deque<int> GetDeq(void) const;
};

#endif
