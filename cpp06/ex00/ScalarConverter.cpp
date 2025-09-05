/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:26 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/24 15:12:53 by amarouf          ###   ########.fr       */
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
	if (str.size() > 19)
		return (INVALID_TYPE);
	else if (Checkfloat(str))
		return (FLOAT_TYPE);
	else if (CheckInt(str))
		return (INT_TYPE);
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
		type = CheckType(str);
		switch (type)
		{
			case INT_TYPE:
				convert_int(str);
				break;
			case CHAR_TYPE:
				convert_char(str);
				break;
			case FLOAT_TYPE:
				convert_float(str);
				break;
			case DOUBLE_TYPE:
				convert_double(str);
				break;
			default:
				NoTypeFound(type);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
