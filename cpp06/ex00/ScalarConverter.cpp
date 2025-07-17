/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:26 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/17 09:54:35 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter&){}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& S)
{
	return (S);
}

const  char *ScalarConverter::NotDisplayable::what() const throw()
{
	return ("The Character is not displayable !");
}


ScalarConverter::~ScalarConverter(){}

void ScalarConverter::CheckDisplayChar(std::string str)
{
	size_t i = 0;

	while (i < str.size())
	{
		if (str[i] <= 31)
		{
			throw NotDisplayable();
		}
		i ++;
	}
}


void ScalarConverter::convert(std::string str)
{
	try
	{
		CheckDisplayChar(str);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		// return;
	}
}
