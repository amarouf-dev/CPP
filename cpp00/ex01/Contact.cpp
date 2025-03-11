/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:15 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/11 01:51:59 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

	Contact::Contact()
	{
		index = 0;
	}

	int Contact::getIndex()
	{
		return (index);
	}

	std::string Contact::getFname()
	{
		return (f_name);
	}
	
	std::string Contact::getLname()
	{
		return (l_name);
	}
	
	std::string Contact::getNname()
	{
		return (n_name);
	}
	std::string Contact::getPnumber()
	{
		return (p_number);
	}
	std::string Contact::getSecret()
	{
        return (secret);
    }
	
	void Contact::setFname(std::string set)
	{
		f_name = set;
	}
	void Contact::setLname(std::string set)
	{
		l_name = set;
	}
	void Contact::setNname(std::string set)
	{
		n_name = set;
	}
	bool Contact::setPnumber(std::string set)
	{
		int i = 0;

		while (set[i])
		{
			if (isdigit(set[i]) == 0)
			{
				std::cout << "\033[1;31mInvalid phone number!\033[0m" << std::endl;
				return (false);
			}
			i ++;
		}
		p_number = set;
		return (true);
	}
	void Contact::setSecret(std::string set)
	{
		secret = set;
	}

	void Contact::setIndex(int new_index)
	{
		index = new_index;
	}
	