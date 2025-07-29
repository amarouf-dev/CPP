/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 05:37:14 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/27 23:22:21 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void convert_int(std::string str)
{
	char character;
	int integer;
	float floating_p;
	double double_;

	integer = std::atoi(str.c_str());
	character = static_cast<char>(integer);
	floating_p = static_cast<float>(integer);
	double_ = static_cast<double>(integer);

	if (CheckDisplayChar(character))
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: \'" << character << '\'' << std::endl;
	std::cout << "int: " <<  integer << std::endl;
	std::cout << "float: " << floating_p  << ".0f" << std::endl;
	std::cout << "double: " << double_ << ".0" << std::endl;
}


void convert_char(std::string str)
{
	char character;
	int integer;
	float floating_p;
	double double_;

	character = str[0];
	integer = static_cast<int>(character);
	floating_p = static_cast<float>(character);
	double_ = static_cast<double>(character);

	if (CheckDisplayChar(character))
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: \'" << character << '\'' << std::endl;

	std::cout << "int: " <<  integer << std::endl;
	std::cout << "float: " << floating_p  << ".0f" << std::endl;
	std::cout << "double: " << double_ << ".0" << std::endl;
}


void convert_float(std::string str)
{
	char character;
	int integer;
	float floating_p = 0.0;
	double double_;

	floating_p = std::atof(str.c_str());
	character = static_cast<char>(floating_p);
	integer = static_cast<int>(floating_p);
	double_ = static_cast<double>(floating_p);

	if (CheckDisplayChar(character))
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: \'" << character << '\'' << std::endl;

	std::cout << "int: " <<  integer << std::endl;
	std::cout << "float: " << floating_p << 'f' << std::endl;
	std::cout << "double: " << double_ << std::endl;
}

void convert_double(std::string str)
{
	char character;
	int integer;
	float floating_p;
	double double_ = 0.0;

	double_ = std::atof(str.c_str());
	character = static_cast<char>(double_);
	integer = static_cast<int>(double_);
	floating_p = static_cast<float>(double_);

	if (CheckDisplayChar(character))
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: \'" << character << '\'' << std::endl;

	std::cout << "int: " <<  integer << std::endl;
	std::cout << "float: " << floating_p << 'f' << std::endl;
	std::cout << "double: " << double_ << std::endl;
}

void NoTypeFound(void)
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " <<  "impossible" << std::endl;
	std::cout << "float: " << "nanf" << std::endl;
	std::cout << "double: " << "nan" << std::endl;
}
