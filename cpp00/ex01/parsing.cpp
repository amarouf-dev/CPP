/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:20:07 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/05 13:20:34 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    fix_print(std::string str)
{
	int	i = 0;

	if (str.length() > 10)
		(std::cout.write(str.c_str(), 9) ,std::cout << '.');
	else if (str.length() < 10)
	{
		i = ((10 - str.length()) / 2);
		while (i --)
			std::cout << ' ';
		i = ((10 - str.length()) / 2);
		std::cout << str;
		while (i --)
			std::cout << ' ';
		if (str.length() % 2 != 0)
			std::cout << ' ';
	}
	else
		std::cout << str;
	std::cout << '|';
}

bool pars_number(std::string nbr)
{
	if (nbr.length() != 1)
		return false;
	if (nbr[0] <= '0' || nbr[0] > '8')
		return false;
	return true;
}
