/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:20 by amarouf           #+#    #+#             */
/*   Updated: 2024/11/21 11:19:39 by amarouf          ###   ########.fr       */
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

void contact_prompt(Contact *Contacts, int index)
{
	int rd = 0;
	int i = 0;

	std::cout << "\033[1mEnter the index of a contact: \033[0m";
	std::cin >> rd;
	if (rd <= 0 || rd > index)
	{
		std::cout << "\033[1;31mInvalid index!\033[0m\n";
		return;
	}
	rd --;
	std::cout << "First Name: " << Contacts[rd].getFname() << "\n";
	std::cout << "Last Name: " << Contacts[rd].getLname() << "\n";
	std::cout << "NickName: " << Contacts[rd].getNname() << "\n";
	std::cout << "Phone Number: " << Contacts[rd].getPnumber() << "\n";
	std::cout << "Darckest Secret: " << Contacts[rd].getSecret() << "\n";
}

void print_contact_info(Contact *Contacts, int index)
{
	int i = 0;
	int j;

	while (i < index)
	{
		
		j = -1;
		while (++j < 4)
			std::cout << ' ';
		std::cout << Contacts[i].getIndex();
		while (++j < 10)
			std::cout << ' ';
		std::cout << '|';
		fix_print(Contacts[i].getFname());
		fix_print(Contacts[i].getLname());
		fix_print(Contacts[i].getNname());
		std::cout << '\n';
		i ++;
	}
	contact_prompt(Contacts, index);
}

void PhoneBook::search_contact()
{
	print_contact_info(PhoneBook::Contacts, PhoneBook::index);
}

void PhoneBook::add_contact()
{
	std::string rd;

	std::cout << "First Name: ";
	std::cin >> rd;
	PhoneBook::Contacts[PhoneBook::index].setFname(rd);
	std::cout << "Last Name: ";
	std::cin >> rd;
	PhoneBook::Contacts[PhoneBook::index].setLname(rd);
	std::cout << "NickName: ";
	std::cin >> rd;
	PhoneBook::Contacts[PhoneBook::index].setNname(rd);
	std::cout << "Phone Number: ";
	std::cin >> rd;
	PhoneBook::Contacts[PhoneBook::index].setPnumber(rd);
	std::cout << "Darckest Secret: ";
	std::cin >> rd;
	PhoneBook::Contacts[PhoneBook::index].setSecret(rd);
	PhoneBook::Contacts[PhoneBook::index].setIndex(PhoneBook::index + 1);
	PhoneBook::index ++;
}

void _menu()
{
	int i = 0;
	PhoneBook phone;

	std::string command;

	while (1)
	{
		std::cout << "\033[1m===============MENU===============\n";
		std::cout << "= OPTIONS:                       =\n";
		std::cout << "= 1- ADD                         =\n";
		std::cout << "= 2- SEARCH                      =\n";
		std::cout << "= 3- EXIT                        =\n";
		std::cout << "==================================\n";
		std::cout << "->Enter a Command: \033[0m";
		std::cin >> command;
		if (command.empty())
			return;
		if (!strcmp(command.c_str(), "add") || !strcmp(command.c_str(), "ADD"))
		{
			phone.add_contact();
			std::cout << "\033[1;32mContact added successfully!\033[0m\n";
		}
		if (!strcmp(command.c_str(), "search") || !strcmp(command.c_str(), "SEARCH"))
			phone.search_contact();
		if (!strcmp(command.c_str(), "exit") || !strcmp(command.c_str(), "EXIT"))
		{
			std::cout << "\033[1;31mExit!\n\033[0m";
			return;
		}
	}
}

int main()
{
	_menu();
}
