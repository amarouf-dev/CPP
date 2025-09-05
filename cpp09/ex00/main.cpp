

#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Wrong number of arguments !\n";
        return (1);
    }
    try
    {
        BitcoinExchange b;
    
        b.ReadArgFile(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}