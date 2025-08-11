/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typecheck.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:22:26 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/11 17:53:10 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ScalarConverter::CheckInt(std::string str)
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

void ScalarConverter::CheckDisplayChar(char c)
{
    if (!std::isprint(c))
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: \'" << c << '\'' << std::endl;
}

bool ScalarConverter::CheckChar(std::string str)
{
    if (str.size() > 1)
        return (false);
    return (true);
}

bool ScalarConverter::Checkfloat(std::string str)
{
    char *end;
    std::string tmp;
    size_t pos = str.find_first_of('.');
    
    if (pos != std::string::npos)
    {
        if (str[str.size() - 1] != 'f')
            return (false);
        if (str[str.size() - 2] == '.')
            return (false);
        tmp = str.substr(0, (str.size() - 2));
        strtod(tmp.c_str(), &end);
        if (end[0])
            return (false);
    }
    else
        return (false);
    return (true);
}

bool ScalarConverter::Checkdouble(std::string str)
{
    char *end;
    if (str[str.size() - 1] == '.')
            return (false);
    strtod(str.c_str(), &end);
    if (end[0])
        return false;
    return (true);
}
