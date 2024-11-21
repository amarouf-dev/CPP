/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:15 by amarouf           #+#    #+#             */
/*   Updated: 2024/11/21 09:57:57 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

	int        	Contact::getIndex()
	{
		return (this->index);
	}

	std::string Contact::getFname()
	{
		return (this->f_name);
	}
	
	std::string Contact::getLname()
	{
		return (this->l_name);
	}
	
	std::string Contact::getNname()
	{
		return (this->n_name);
	}
	std::string Contact::getPnumber()
	{
		return (this->p_number);
	}
	std::string Contact::getSecret()
	{
        return (this->secret);
    }
	
	//Getters
	void Contact::setFname(std::string set)
	{
		this->f_name = set;
	}
	void Contact::setLname(std::string set)
	{
		this->l_name = set;
	}
	void Contact::setNname(std::string set)
	{
		this->n_name = set;
	}
	void Contact::setPnumber(std::string set)
	{
		this->p_number = set;
	}
	void Contact::setSecret(std::string set)
	{
		this->secret = set;
	}

	void Contact::setIndex(int new_index)
	{
		this->index = new_index;
	}
	