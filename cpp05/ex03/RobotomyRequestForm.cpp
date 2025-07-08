/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 23:20:34 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/08 02:15:18 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RobotomyRequestForm", RRequiredSighn, RRequireExec), target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string& new_target):AForm::AForm("RobotomyRequestForm", RRequiredSighn, RRequireExec), target(new_target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& N)
{
	this->target = N.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& N)
{
	if (this != &N)
	{
		AForm::operator=(N);
		this->target = N.target;
	}
	return (*this);
}


void RobotomyRequestForm::doExecute() const
{
    std::srand(std::time(0));
	int RandomN = std::rand() % 2;

    std::cout << "Bzzzzzzzz..\n";

    if (RandomN)
        std::cout << target << " has been robotomized successfully 50\% of the time\n";
    else
        std::cout << " the robotomy failed\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {}
