/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:51:25 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/29 18:22:43 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid number of argiments\n";
		return 1;
	}
	ScalarConverter::convert(av[1]);
}