

#include "RPN.hpp"

void    RPN::parsInput(std::string str)
{
	int n1;
	int n2;

	for (size_t i = 0; i < str.size(); i ++)
	{
		if (str[i] == ' ')
			continue;
		else if (std::isdigit(str[i]))
			this->r.push(str[i] - '0');
		else if ((str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') && (r.size() > 1))
		{
			n2 = this->r.top();
			this->r.pop();
			n1 = this->r.top();
			this->r.pop();
			if (str[i] == '+')
				this->r.push(n1 + n2);
			if (str[i] == '-')
				this->r.push(n1 - n2);
			if (str[i] == '/')
				this->r.push(n1 / n2);
			if (str[i] == '*')
				this->r.push(n1 * n2);
		}
		else
			throw std::runtime_error("Error");
	}
	if (this->r.size() > 1)
		throw std::runtime_error("Error");
	std::cout << r.top() << std::endl;
}
