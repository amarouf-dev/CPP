/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:20 by amarouf           #+#    #+#             */
/*   Updated: 2025/01/08 19:11:04 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool checkEOF(std::string str)
{
	if (std::cin.eof())
	{
		std::cout << "\033[1;31mEnd Of line!\033[0m\n";
		return (true);
	}
	return (false);
}

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

bool contact_prompt(Contact *Contacts, int index)
{
	int rd = 0;
	int i = 0;

	std::cout << "\033[1mEnter the index of a contact: \033[0m";
	std::cin >> rd;
	if (checkEOF(std::to_string(rd)), std::cin.fail())
		return (false);
	if (rd <= 0 || rd > index)
	{
		std::cout << "\033[1;31mInvalid index!\033[0m\n";
		return (true);
	}
	rd --;
	std::cout << "\033[1mFirst Name: \033[0m" << Contacts[rd].getFname() << "\n";
	std::cout << "\033[1mLast Name: \033[0m" << Contacts[rd].getLname() << "\n";
	std::cout << "\033[1mNickName: \033[0m" << Contacts[rd].getNname() << "\n";
	std::cout << "\033[1mPhone Number: \033[0m" << Contacts[rd].getPnumber() << "\n";
	std::cout << "\033[1mDarckest Secret: \033[0m" << Contacts[rd].getSecret() << "\n";
	return (true);
}

bool print_contact_info(Contact Contacts[8], int index)
{
	int i = 0;
	int j;

	if (Contacts[0].getIndex())
	{
		while (Contacts[i].getIndex())
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
	}
	else
	{
		std::cout << "\033[1;31mNo Contacts to display !\n\033[0m";
		return (true);
	}
	if (contact_prompt(Contacts, index) == false)
		return (false);
	return (true);
}

bool PhoneBook::search_contact(PhoneBook phone)
{
	if (print_contact_info(phone.Contacts, phone.index) == false)
		return (false);
	return (true);
}

bool PhoneBook::add_contact(PhoneBook *phone)
{
	std::string rd;

	std::cout << "\033[1mFirst Name: \033[0m";
	std::getline(std::cin, rd);
	if (checkEOF(rd)) return (false);
	phone->Contacts[phone->index].setFname(rd);
	std::cout << "\033[1mLast Name: \033[0m";
	std::getline(std::cin, rd);
	if (checkEOF(rd)) return (false);
	phone->Contacts[phone->index].setLname(rd);
	std::cout << "\033[1mNickName: \033[0m";
	std::getline(std::cin, rd);
	if (checkEOF(rd)) return (false);
	phone->Contacts[phone->index].setNname(rd);
	std::cout << "\033[1mPhone Number: \033[0m";
	std::getline(std::cin, rd);
	if (checkEOF(rd)) return (false);
	phone->Contacts[phone->index].setPnumber(rd);
	std::cout << "\033[1mDarckest Secret: \033[0m";
	std::getline(std::cin, rd);
	if (checkEOF(rd)) return (false);
	phone->Contacts[phone->index].setSecret(rd);
	phone->Contacts[phone->index].setIndex(phone->index + 1);
	phone->index ++;
	if (phone->index == 8) phone->index = 0;
	return (true);
}
#include <unistd.h>
void _menu()
{
	int i = 0;
	PhoneBook phone;

	std::string command;

	while (true)
	{
		std::cout << "\033[1m===============MENU===============\n";
		std::cout << "= OPTIONS:                       =\n";
		std::cout << "= 1- ADD                         =\n";
		std::cout << "= 2- SEARCH                      =\n";
		std::cout << "= 3- EXIT                        =\n";
		std::cout << "==================================\n";
		std::cout << "->Enter a Command: \033[0m";
		std::getline(std::cin, command);
		if (checkEOF(command))
			break;
		if (command == "add" || command == "ADD")
		{
			std::cout << "\033[1m-Add a contact:\033[0m\n";
			if (phone.add_contact(&phone) == true)
				std::cout << "\033[1;32mContact added successfully!\033[0m\n";
			else
			{
				std::cout << "\033[1;31mContact not added!\033[0m\n";
				break;
			}
		}
		else if (command == "search" || command == "SEARCH")
		{
			phone.search_contact(phone);
		}
		else if (command == "exit" || command == "EXIT")
		{
			std::cout << "\033[1;31mExit!\n\033[0m";
			return;
		}
		else
			std::cout << "\033[1;31mInvalid Command!\033[0m\n";
	}
}

int main()
{
	_menu();
}
