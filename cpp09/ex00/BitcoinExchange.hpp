

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

    std::map<std::string, float> db;
    void parsDB(std::string);
    void parsfile(std::string);
	void CountResult(std::string, std::string);

    public:
    
    BitcoinExchange();
    BitcoinExchange(BitcoinExchange&);

    BitcoinExchange& operator=(BitcoinExchange&);

    ~BitcoinExchange();

    void ReadArgFile(std::string);
};

#endif