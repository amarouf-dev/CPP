/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typecheckers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:22:26 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/20 19:45:12 by amarouf          ###   ########.fr       */
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
        if (str[i] < '0' || str[i] > '9')
        {
            return (false);
        }
        i ++;
    }
    return (true);
}

void CheckDisplayChar(std::string str)
{
	// size_t i = 0;

	// while (i < str.size())
	// {
		if (str[0] <= 31)
		{
			throw std::invalid_argument("ERROR: Not displayable!");
		}
		// i ++;
	// }
}

bool CheckChar(std::string str)
{
    if (str.size() > 1)
        throw std::invalid_argument("ERROR: More than one Character!");        
    CheckDisplayChar(str);
    return (true);
}

bool Checkfloat(std::string str)
{
    size_t pos = str.find(".");
    unsigned long i = 0;

    if (pos != std::string::npos && str[str.length() - 1] == 'f')
    {
        if (str[0] == '+' || str[0] == '-')
            i ++;
        while (i < str.length() - 1)
        {
            if (str[i] >= '0' && str[i] <= '9')
                i ++;
            else if (str[i] == '.')
                i ++;
            else
                throw std::invalid_argument("ERROR: invalid argument!");
        }
    }
    else
        return false;
    return (true);
}

bool Checkdouble(std::string str)
{
    size_t pos = str.find(".");
    unsigned long i = 0;

    if (pos != std::string::npos)
    {
        if (str[0] == '+' || str[0] == '-')
            i ++;
        while (i < str.length())
        {
            if (str[i] >= '0' && str[i] <= '9')
                i ++;
            else if (str[i] == '.')
                i ++;
            else
                throw std::invalid_argument("ERROR: invalid argument!");
        }
    }
    else
        return false;
    return true;
}
