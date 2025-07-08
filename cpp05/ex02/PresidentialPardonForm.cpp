/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 23:20:31 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/08 02:21:32 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
    AForm::AForm("PresidentialPardonForm", PRequiredSighn, PRequireExec), target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string& new_target):
    AForm::AForm("PresidentialPardonForm", PRequiredSighn, PRequireExec), target(new_target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& N)
{
	this->target = N.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& N)
{
	if (this != &N)
	{
		AForm::operator=(N);
		this->target = N.target;
	}
	return (*this);
}


void PresidentialPardonForm::doExecute() const
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {}