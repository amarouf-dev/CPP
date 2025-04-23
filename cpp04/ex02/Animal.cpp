/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:09:34 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 17:46:15 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Default")
{
    std::cout << "Animal's Default Constructor\n";
}

Animal::Animal(std::string New_type) : type(New_type)
{
    std::cout << "Animal's Parametrized Constructor\n";
}

Animal& Animal::operator=(const Animal& Animal1)
{
    std::cout << "Animal's Copy assignment Operator\n";
    if (this != &Animal1)
        this->type = Animal1.type;
    return *this;
}

Animal::Animal(const Animal& Animal1)
{
    std::cout << "Animal's Copy Constructor\n";
    *this = Animal1;
}

Animal::~Animal()
{
    std::cout << "Animal's Destructor\n";
}

std::string Animal::getType() const
{
    return (type);
}
