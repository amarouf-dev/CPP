/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typecheck.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:22:26 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/02 19:29:48 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool CheckInt(std::string str)
{
    size_t i = 0;
	if (str[0] == '-' || str[0] == '+')
		i ++;
    while (i < str.size())
    {
        if (!std::isdigit(str[i]))
            return (false);
        i ++;
    }
    return (true);
}

void CheckDisplayChar(char c)
{
    if (!std::isprint(c))
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: \'" << c << '\'' << std::endl;
}

bool CheckChar(std::string str)
{
    if (str.size() > 1)
        return (false);
    return (true);
}

bool Checkfloat(std::string str)
{
    size_t pos = str.find(".");
    unsigned long i = 0;
    bool dt = false;

    if (pos != std::string::npos && str[str.length() - 1] == 'f')
    {
        if (str[0] == '+' || str[0] == '-')
            i ++;
        while (i < str.length() - 1)
        {
            if (str[i] >= '0' && str[i] <= '9')
                i ++;
            else if (str[i] == '.' && dt == false)
            {
                dt = true;
                i ++;
            }
            else
                throw std::invalid_argument("ERROR: invalid argument!");
        }
    }
    else
        return (false);
    return (true);
}

bool Checkdouble(std::string str)
{
    size_t pos = str.find(".");
    unsigned long i = 0;
    bool dt = false;

    if (pos != std::string::npos && str[i])
    {
        if (str == ".")
            return (false);
        if (str[0] == '+' || str[0] == '-')
            i ++;
        while (i < str.length())
        {
            if (std::isdigit(str[i]))
                i ++;
            else if (str[i] == '.' && dt == false)
            {
                dt = true;
                i ++;
            }
            else
                throw std::invalid_argument("ERROR: invalid argument!");
        }
    }
    else
        return false;
    return true;
}
