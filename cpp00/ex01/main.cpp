/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:18:54 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/11 21:35:35 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int  _menu()
{
	PhoneBook phone;
	std::string command;

	while (true)
	{
		std::cout << "===============MENU===============\n";
		std::cout << "= OPTIONS:                       =\n";
		std::cout << "= 1- ADD                         =\n";
		std::cout << "= 2- SEARCH                      =\n";
		std::cout << "= 3- EXIT                        =\n";
		std::cout << "==================================\n";
		std::cout << "->Enter a Command: ";
		if (!std::getline(std::cin, command))
		{
			if (std::cin.eof())
				return (1);
			continue ;
		}
		if (command == "ADD")
		{
			std::cout << "\033[1m-Add a contact:\033[0m\n";
			if (phone.add_contact() == true)
			{
				std::cout << "\033[1;32mContact added successfully!\033[0m\n";
				continue;
			}
			else
			{
				std::cout << "\033[1;31mContact not added!\033[0m\n";
				continue;
			}
		}
		else if (command == "SEARCH")
		{
			if (phone.print_contact_info() == false)
				continue;
		}
		else if (command == "EXIT")
		{
			std::cout << "\033[1;31mExit!\n\033[0m";
			return (0);
		}
		else
			std::cout << "\033[1;31mInvalid Command!\033[0m\n";
	}
}

int main()
{
	return (_menu());
}
