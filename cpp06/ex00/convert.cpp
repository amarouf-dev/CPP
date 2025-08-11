/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 05:37:14 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/11 17:36:36 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert_int(std::string str)
{
	long l;
	char c;
	int i;
	float f;
	double d;

	l = atol(str.c_str());
	if (l > INT_MAX)
	{
		NoTypeFound(PINF_);
		return;
	}
	if (l < INT_MIN)
	{
		NoTypeFound(NINF_);
		return;
	}
	i = std::atoi(str.c_str());
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);

	CheckDisplayChar(c);
	std::cout << "int: " <<  i << std::endl;
	std::cout << "float: " << f  << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}


void ScalarConverter::convert_char(std::string str)
{
	char c;
	int i;
	float f;
	double d;

	c = str[0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);

	CheckDisplayChar(c);
	std::cout << "int: " <<  i << std::endl;
	std::cout << "float: " << f  << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}


void ScalarConverter::convert_float(std::string str)
{
	char c;
	int i;
	float f = 0.0;
	double d;

	f = std::strtod(str.c_str(), NULL);
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);

	if (isinff(f) > 0)
	{
		NoTypeFound(PINF_);
		return;
	}
	else if (isinff(f) < 0)
	{
		NoTypeFound(NINF_);
		return;
	}

	CheckDisplayChar(c);
	std::cout << "int: " <<  i << std::endl;
	std::cout << "float: " << f << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert_double(std::string str)
{
	char c;
	int i;
	float f;
	double d = 0.0;

	d = std::atof(str.c_str());
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	if (isinff(f) > 0)
	{
		NoTypeFound(PINF_);
		return;
	}
	else if (isinff(f) < 0)
	{
		NoTypeFound(NINF_);
		return;
	}

	CheckDisplayChar(c);
	std::cout << "int: " <<  i << std::endl;
	std::cout << "float: " << f << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::NoTypeFound(Type tp)
{
	switch (tp)
	{
		case PINF_:
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " <<  "impossible" << std::endl;
			std::cout << "float: " << "+inff" << std::endl;
			std::cout << "double: " << "+inf" << std::endl;
			break;
		case NINF_:
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " <<  "impossible" << std::endl;
			std::cout << "float: " << "-inff" << std::endl;
			std::cout << "double: " << "-inf" << std::endl;
			break;
		default:
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " <<  "impossible" << std::endl;
			std::cout << "float: " << "nanf" << std::endl;
			std::cout << "double: " << "nan" << std::endl;
			break;
	}
}
