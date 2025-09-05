

#ifndef BTC
#define BTC

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <map>

class BitcoinExchange
{
    private:

    std::map<std::string, int> db;
    void parsDB(std::string);
    
    public:
    
    BitcoinExchange();
};

void ReadArgFile(std::string);
void parsfile(std::string);


#endif