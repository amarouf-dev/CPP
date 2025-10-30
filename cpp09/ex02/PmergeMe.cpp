

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
	this->start = time(0);
	MergeVec(this->vec);
	this->end = time(0);
	std::cout << "after: ";
	for (size_t i = 0; i < this->vec.size(); i ++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
	this->vec_duration = start - end;
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
			std::swap(Deq[i], Deq[i + 1]);
		}
		else
		{
			large.push_back(Deq[i + 1]);
			small.push_back(Deq[i]);
		}
	}
	if (Deq.size() % 2 != 0)
		small.push_back(Deq.back());
	MergeDeq(small);
	std::deque<int>::iterator it;
	for (size_t i = 0; i < large.size(); i ++)
	{
		it = std::lower_bound(small.begin(), small.end(), large[i]);
		small.insert(it, large[i]);
	}
	Deq = small;
}

void PmergeMe::SortDeque()
{

	this->start = time(0);
	MergeDeq(this->deq);
	this->end = time(0);
	std::cout << std::endl;
	this->deq_duration = start - end;
	std::cout << start << std::endl;
	std::cout << end;
}
