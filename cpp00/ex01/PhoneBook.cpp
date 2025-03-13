/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:20 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/11 21:33:59 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void PhoneBook::setContact(Contact Contact[8])
{
	for(int i = 0; i < 8; i ++)
		Contact[i] = Contact[i];
}
Contact *PhoneBook::getContact(void)
{
	return (Contacts);
}

int PhoneBook::getIndex(void)
{
	return (index);
}

bool PhoneBook::contact_prompt(Contact *Contacts)
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

bool PhoneBook::print_contact_info()
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
	if (contact_prompt(Contacts) == false)
		return (false);
	return (true);
}

bool PhoneBook::add_contact(void)
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
	Contacts[index].setFname(rd);
	std::cout << "\033[1mLast Name: \033[0m";
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	Contacts[index].setLname(rd);
	std::cout << "\033[1mNickName: \033[0m";
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	Contacts[index].setNname(rd);
	std::cout << "\033[1mPhone Number: \033[0m";
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	if (Contacts[index].setPnumber(rd) == false)
		return (false);
	std::cout << "\033[1mDarckest Secret: \033[0m";
	if (!std::getline(std::cin, rd) || rd == "")
	{
		if (std::cin.eof())
			exit(1);
		else
			return (false);
	}
	Contacts[index].setSecret(rd);
	Contacts[index].setIndex(index + 1);
	index ++;
	if (index == 8) index = 0;
	return (true);
}
