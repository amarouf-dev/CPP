/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:23:22 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/21 19:46:36 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

bool PhoneBook::getContact(std::string str, std::string &buf)
{
	std::cout << str;
	if (!std::getline(std::cin, buf))
	{
		if (std::cin.eof()) exit(1);
	}
	if (buf == "")
	{
		std::cout << "\033[1;31mEmpty Line !\033[0m\n";
		return false;
	}
	return true;
}

bool PhoneBook::setContact(void)
{
	std::string rd;

	while (!getContact("\033[1mFirst Name: \033[0m", rd));
	Contacts[index].setFname(rd);
	while (!getContact("\033[1mLast Name: \033[0m", rd));
	Contacts[index].setLname(rd);
	while (!getContact("\033[1mNickName: \033[0m", rd));
	Contacts[index].setNname(rd);
	while (true)
	{
		if (!getContact("\033[1mPhone Number: \033[0m", rd))
			continue;
		if (!Contacts[index].setPnumber(rd))
			continue;
		else
			break;
	}
	while (!getContact("\033[1mDarckest Secret: \033[0m", rd));
	Contacts[index].setSecret(rd);
	Contacts[index].setIndex(index + 1);
	index ++;
	if (index == 8) index = 0;
	return (true);
}

void	PhoneBook::FixPrint(std::string str)
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

bool PhoneBook::pars_number(std::string nbr)
{
	if (nbr.length() != 1)
		return false;
	if (nbr[0] <= '0' || nbr[0] > '8')
		return false;
	return true;
}

bool PhoneBook::ContactDisplay(void)
{
	std::string nbr;
	int rd;

	while (!getContact("\033[1mEnter the index of a contact: \033[0m", nbr));
	if (!pars_number(nbr))
	{
		std::cout << "\033[1;31mInvalid Index !\n\033[0m";
		return true;
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

bool PhoneBook::SearchContact(void)
{
	int i = 0;
	int j = 0;

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
			FixPrint(Contacts[i].getFname());
			FixPrint(Contacts[i].getLname());
			FixPrint(Contacts[i].getNname());
			std::cout << '\n';
			i ++;
		}
	}
	else
	{
		std::cout << "\033[1;31mNo Contacts to display !\n\033[0m";
		return true;
	}
	ContactDisplay();
	return true;
}
