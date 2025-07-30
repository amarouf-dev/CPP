/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 05:37:14 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/30 16:15:38 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void convert_int(std::string str)
{
	char c;
	int i;
	float f;
	double d;

	i = std::atoi(str.c_str());
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);

	CheckDisplayChar(c);
	std::cout << "int: " <<  i << std::endl;
	std::cout << "float: " << f  << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}


void convert_char(std::string str)
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


void convert_float(std::string str)
{
	char c;
	int i;
	float f = 0.0;
	double d;

	f = std::atof(str.c_str());
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);

	CheckDisplayChar(c);
	std::cout << "int: " <<  i << std::endl;
	std::cout << "float: " << f << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void convert_double(std::string str)
{
	char c;
	int i;
	float f;
	double d = 0.0;

	d = std::atof(str.c_str());
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);

	CheckDisplayChar(c);
	std::cout << "int: " <<  i << std::endl;
	std::cout << "float: " << f << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void NoTypeFound(void)
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " <<  "impossible" << std::endl;
	std::cout << "float: " << "nanf" << std::endl;
	std::cout << "double: " << "nan" << std::endl;
}
