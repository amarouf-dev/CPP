

#include "RPN.hpp"


int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Wrong number of arguments!\n";
        return (1);
    }
    try
    {
        RPN R;
    
        R.parsInput(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
