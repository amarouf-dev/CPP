
#include "PmergeMe.hpp"
#include <climits>

bool Overflow(std::string tmp)
{
    long ovf;

    if (tmp.size() > 10)
        return (false);
    ovf = atol(tmp.c_str());
    if (ovf > INT_MAX || ovf < 0)
        return (false);
    return (true);
}

std::vector<int> Parsinp(int ac, char **av)
{
    std::vector<int> v;
    std::string tmp;

    for (int i = 1; i < ac; i ++)
    {
        tmp = av[i];
        if (tmp.empty() || !Overflow(tmp))
                throw std::runtime_error("Error: Invalid input value!");
        for (int j = 0; j < tmp.size(); j ++)
        {
            if (!isdigit(tmp[j]))
                throw std::runtime_error("Error: Invalid input value!");
        }
        v.push_back(atoi(tmp.c_str()));
    }
    std::cout << "Before: ";
    for (int i = 0; i < v.size(); i ++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return (v);
}

int main (int ac, char **av)
{
    PmergeMe merge;

    try
    {
        if (ac < 2)
            throw std::runtime_error("Error: Invalid input value!");
        merge.SetVec(Parsinp(ac, av));
        std::deque<int> d(merge.GetVec().begin(), merge.GetVec().end());
        merge.SetDeq(d);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
