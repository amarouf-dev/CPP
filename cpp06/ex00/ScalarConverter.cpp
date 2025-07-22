/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:26 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/20 19:44:04 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter&){}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& S)
{
	return (S);
}

ScalarConverter::~ScalarConverter(){}

Type ScalarConverter::CheckType(std::string str)
{
	if (CheckInt(str))
		return (INT_TYPE);
	else if (Checkfloat(str))
		return (FLOAT_TYPE);
	else if (Checkdouble(str))
		return (DOUBLE_TYPE);
	else if (CheckChar(str))
		return (CHAR_TYPE);
	else
		return (INVALID_TYPE);
}

void ScalarConverter::convert(std::string str)
{
	Type type;
	try
	{
		if (str.empty())
		{
			throw std::invalid_argument("ERROR: Empty string!");
		}
		type = CheckType(str);
		if (type == CHAR_TYPE)
			std::cout << "ITS A CHARACTER\n";
		if (type == INT_TYPE)
			std::cout << "ITS A NUMBER\n";
		if (type == FLOAT_TYPE)
			std::cout << "ITS A FLOATING POINT\n";
		if (type == DOUBLE_TYPE)
			std::cout << "ITS A DOUBLE\n";
		if (type == INVALID_TYPE)
			std::cout << "ITS INVALID\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
