

#include "PmergeMe.hpp"


double PmergeMe::GetDeqTime()
{
	return (this->deq_duration);
}

double PmergeMe::GetVecTime()
{
	return (this->vec_duration);
}


void PmergeMe::SetVec(std::vector<int> V)
{
	this->vec = V;
}

void PmergeMe::SetDeq(std::deque<int> D)
{
	this->deq = D;
}

const std::vector<int>& PmergeMe::GetVec(void) const
{
	return (this->vec);
}

const std::deque<int>& PmergeMe::GetDeq(void) const
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
        }
        else
        {
            small.push_back(vec[i]);
            large.push_back(vec[i + 1]);
        }
    }

    if (vec.size() % 2 != 0)
        small.push_back(vec.back());

    MergeVec(small);

    for (size_t i = 0; i < large.size(); i++)
    {
        std::vector<int>::iterator it = std::lower_bound(small.begin(), small.end(), large[i]);
        small.insert(it, large[i]);
    }

    vec = small;
}


void PmergeMe::SortVector()
{
	this->start = clock();
	MergeVec(this->vec);
	this->end = clock();
	std::cout << "after: ";
	for (size_t i = 0; i < this->vec.size(); i ++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
	this->vec_duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void MergeDeq(std::deque<int> &Deq)
{
    std::deque<int> small;
    std::deque<int> large;

    if (Deq.size() <= 1)
        return;

    for (size_t i = 0; i + 1 < Deq.size(); i += 2)
    {
        if (Deq[i] > Deq[i + 1])
        {
            small.push_back(Deq[i + 1]);
            large.push_back(Deq[i]);
        }
        else
        {
            small.push_back(Deq[i]);
            large.push_back(Deq[i + 1]);
        }
    }

    if (Deq.size() % 2 != 0)
        small.push_back(Deq.back());

    MergeDeq(small);

    for (size_t i = 0; i < large.size(); i++)
    {
        std::deque<int>::iterator it = std::lower_bound(small.begin(), small.end(), large[i]);
        small.insert(it, large[i]);
    }
    Deq = small;
}


void PmergeMe::SortDeque()
{
	this->start = clock();
	MergeDeq(this->deq);
	this->end = clock();
	std::cout << std::endl;
	this->deq_duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}
