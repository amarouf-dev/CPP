

#include "BitcoinExchange.hpp"

void BitcoinExchange::parsDB(std::string tmp)
{
	std::string date = tmp.substr(0, tmp.find_first_of(","));
	std::string value = tmp.substr(tmp.find_first_of(",") + 1, tmp.size());
	this->db[date] = atof(value.c_str());
}

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

std::string trim(const std::string &s) {
    size_t start = s.find_first_not_of(" \t\r");
    if (start == std::string::npos)
        return "";
    std::string::size_type end = s.find_last_not_of(" \t\r");
    return s.substr(start, end - start + 1);
}

void parsfile(std::string str)
{
	size_t pos = str.find_first_of("|");
	if (pos == std::string::npos)
		throw std::runtime_error("Invalid content: the '|' character is missing");
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
		throw std::runtime_error("incorrect date: Year-Month-Day");

	std::string date_arr[3];
	date_arr[0] = date.substr(0, date.find_first_of("-"));
	date_arr[1] = date.substr(date.find_first_of("-") + 1, date.size() - date.find_last_of("-"));
	date_arr[2] = date.substr(date.find_last_of("-") + 1, date.size());

	for (size_t i = 0; i < 3; i ++)
	{
		for (size_t j = 0; j < date_arr[i].size(); j ++)
		{
			if (!std::isdigit(date_arr[i][j]))
				throw std::runtime_error("incorrect date: Year-Month-Day");
		}
	}

	if (date_arr[0].size() > 4 || date_arr[1].size() > 2 || date_arr[2].size() > 2)
		throw std::runtime_error("incorrect date: Year-Month-Day");


	// Value pars


	if (value[0] == '-')
		throw std::runtime_error("incorrect value: not a positive number!");
	if (value.size() > 4)
		throw std::runtime_error("incorrect value: 0 to 1000");

	for (size_t i = 0; i < value.size(); i ++)
	{
		if (!std::isdigit(value[i]))
			throw std::runtime_error("incorrect value: 0 to 1000");
	}

	if (atoi(value.c_str()) > 1000)
		throw std::runtime_error("incorrect value: 0 to 1000");
}

void ReadArgFile(std::string str)
{
	std::fstream file(str.c_str());
	if (!file)
		throw std::runtime_error("File open failed");

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
