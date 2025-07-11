/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 08:18:20 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/11 17:54:31 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern& NewInter)
{
    (void)NewInter;
}

Intern& Intern::operator=(Intern& NewInter)
{
    (void)NewInter;
    return (*this);
}

Intern::~Intern(){}

AForm *Intern::makeForm(std::string& name, std::string& target)
{
    int i = 0;
    std::string str[] = { "PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

    while (i < 3)
    {
        if (str[i] == name)
            break;
        i ++;
    }
    switch (i)
    {
    case 0:
        std::cout << "Intern creates " << str[i] << std::endl;
        return (new PresidentialPardonForm(target));
    case 1:
        std::cout << "Intern creates " << str[i] << std::endl;
        return (new RobotomyRequestForm(target));
    case 2:
        std::cout << "Intern creates " << str[i] << std::endl;
        return (new ShrubberyCreationForm(target));
    default:
        std::cout << "name doesn't match" << std::endl;
        return (NULL);
    }
}