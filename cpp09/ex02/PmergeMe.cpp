

#include "PmergeMe.hpp"

void PmergeMe::SetVec(std::vector<int> V)
{
    this->vec = V;
}

void PmergeMe::SetDeq(std::deque<int> D)
{
    this->deq = D;
}

std::vector<int> PmergeMe::GetVec(void) const
{
    return (this->vec);
}

std::deque<int> PmergeMe::GetDeq(void) const
{
    return (this->deq);
}

void MergeVec(std::vector<int> &vec)
{
    std::vector<int> small;
    std::vector<int> large;

    if (vec.size() <= 1)
        return;
    for (size_t i = 0; i + 1 < vec.size(); i += 2)
    {
        if (vec[i] > vec[i + 1])
        {
            small.push_back(vec[i + 1]);
            large.push_back(vec[i]);
            std::swap(vec[i], vec[i + 1]);
        }
        else
        {
            large.push_back(vec[i + 1]);
            small.push_back(vec[i]);
        }
    }
    if (vec.size() % 2 != 0)
        small.push_back(vec.back());
    MergeVec(small);
    std::vector<int>::iterator it;
    for (size_t i = 0; i < large.size(); i ++)
    {
        it = std::lower_bound(small.begin(), small.end(), large[i]);
        small.insert(it, large[i]);
    }
    vec = small;
}

void PmergeMe::SortVector()
{
    MergeVec(this->vec);
    std::cout << "after: ";
    for (size_t i = 0; i < this->vec.size(); i ++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

// void SortDeque(std::deque<int> &deq)
// {

// }



