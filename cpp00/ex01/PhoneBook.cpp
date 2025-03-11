/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:20 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/11 02:22:02 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

bool contact_prompt(Contact *Contacts, int index)
{
	std::string nbr;
	int rd;
	int i = 0;

	std::cout << "\033[1mEnter the index of a contact: \033[0m";
	if (!std::getline(std::cin, nbr))
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	if (!pars_number(nbr))
	{
		std::cout << "\033[1;31mInvalid Index !\n\033[0m";
		return false;
	}
	else
		rd = std::atoi(nbr.c_str());
	if (rd > index)
	{
		std::cout << "\033[1;31mInvalid Index !\n\033[0m";
		return false;
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
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	phone->Contacts[phone->index].setFname(rd);
	std::cout << "\033[1mLast Name: \033[0m";
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	phone->Contacts[phone->index].setLname(rd);
	std::cout << "\033[1mNickName: \033[0m";
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	phone->Contacts[phone->index].setNname(rd);
	std::cout << "\033[1mPhone Number: \033[0m";
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	if (phone->Contacts[phone->index].setPnumber(rd) == false)
		return (false);
	std::cout << "\033[1mDarckest Secret: \033[0m";
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	phone->Contacts[phone->index].setSecret(rd);
	phone->Contacts[phone->index].setIndex(phone->index + 1);
	phone->index ++;
	if (phone->index == 8) phone->index = 0;
	return (true);
}

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
			continue;
		}
		if (command == "add" || command == "ADD")
		{
			std::cout << "\033[1m-Add a contact:\033[0m\n";
			if (phone.add_contact(&phone) == true)
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
		else if (command == "search" || command == "SEARCH")
		{
			if (phone.search_contact(phone) == false)
				continue;
		}
		else if (command == "exit" || command == "EXIT")
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
