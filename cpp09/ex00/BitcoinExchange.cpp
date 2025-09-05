

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::fstream file("cpp_09/data.csv");
	if (!file.good())
		throw std::runtime_error("File open failed");
	std::string tmp;
	std::getline(file, tmp);
	while (std::getline(file, tmp))
	{
		parsDB(tmp);
	}
	file.close();
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& copy)
{
	this->db = copy.db;
	return (*this);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& copy)
{
	this->db = copy.db;
}


BitcoinExchange::~BitcoinExchange(){};

void BitcoinExchange::parsDB(std::string tmp)
{
	std::string date = tmp.substr(0, tmp.find_first_of(","));
	std::string value = tmp.substr(tmp.find_first_of(",") + 1, tmp.size());
	this->db[date] = atof(value.c_str());
}


std::string trim(const std::string &s) {
    size_t start = s.find_first_not_of(" \t\r");
    if (start == std::string::npos)
        return "";
    std::string::size_type end = s.find_last_not_of(" \t\r");
    return s.substr(start, end - start + 1);
}

void BitcoinExchange::CountResult(std::string date, std::string value)
{
	std::map<std::string, float>::iterator it = this->db.lower_bound(date);

	if (it->first == date)
	{
		std::cout << date << " => " << value << " = " << atof(value.c_str()) * it->second << std::endl;
	}
	else
	{
		std::cout << date << " => " << value << " = " << atof(value.c_str()) * (--it)->second << std::endl;
	}

}

void BitcoinExchange::parsfile(std::string str)
{
	size_t pos = str.find_first_of("|");
	if (pos == std::string::npos)
	{
		std::cerr  << "bad input => " << str << "\n";
		return;
	}
	std::string date = str.substr(0, str.find_first_of("|"));
	std::string value = str.substr(str.find_first_of("|") + 1, str.size());

	date = trim(date);
	value = trim(value);

	
	// Date pars
	
	int s = 0;
	
	for (size_t i = 0; i < date.size(); i ++)
	{
		if (str[i] == '-')
		s ++;
	}
	if (s != 2)
	{
		std::cerr << "incorrect date: Year-Month-Day \n";
		return;
	}
	
	std::string date_arr[3];
	date_arr[0] = date.substr(0, date.find_first_of("-"));
	date_arr[1] = date.substr(date.find_first_of("-") + 1, date.size() - date.find_last_of("-") - 1);
	date_arr[2] = date.substr(date.find_last_of("-") + 1, date.size());

	for (size_t i = 0; i < 3; i ++)
	{
		pos = date_arr[i].find_first_of(".");
		for (size_t j = 0; j < date_arr[i].size(); j ++)
		{
			if (!std::isdigit(date_arr[i][j]))
			{
				std::cerr << "incorrect date: not a number \n";
				return;
			}
		}
	}

	if (date_arr[0].size() > 4 || date_arr[1].size() > 2 || date_arr[2].size() > 2)
	{
		std::cerr << "incorrect date: Year-Month-Day \n";
		return;
	}

	// Value pars

	if (value[0] == '-')
	{
		std::cerr << "incorrect value: not a positive number! \n";
		return;
	}
	if (value.size() > 4)
	{
		std::cerr << "incorrect value: too large a number. \n";
		return;
	}

	int flag = 0;

	for (size_t i = 0; i < value.size(); i ++)
	{
		if (value[i] == '.' && !flag)
		{
			i ++;
			flag = 1;
		}
		if (!std::isdigit(value[i]))
		{
			std::cerr << "incorrect value: not a number \n";
			return;
		}
	}

	if (atoi(value.c_str()) > 1000)
	{
		std::cerr << "incorrect value: too large a number. \n";
		return;
	}
	CountResult(date, value);
}

void BitcoinExchange::ReadArgFile(std::string str)
{
	std::fstream file(str.c_str());
	if (!file)
		throw std::runtime_error("File open failed") ;

	std::string line;
	std::getline(file, line);
	if (line != "date | value")
	{
		std::cerr << "Error: missing header (date | value)" << std::endl;
		return;
	}

	while (std::getline(file, line))
	{
		parsfile(line);
	}
}
