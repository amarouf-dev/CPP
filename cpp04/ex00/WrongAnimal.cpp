/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:09:34 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/02 18:22:27 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Default")
{
    std::cout << "WrongAnimal's Default Constructor\n";
}

WrongAnimal::WrongAnimal(std::string New_type) : type(New_type)
{
    std::cout << "WrongAnimal's Parametrized Constructor\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& WrongAnimal1)
{
    std::cout << "WrongAnimal's Copy assignment Operator\n";
    if (this != &WrongAnimal1)
        this->type = WrongAnimal1.type;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal1)
{
    std::cout << "WrongAnimal's Copy Constructor\n";
    *this = WrongAnimal1;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal's Destructor\n";
}

void WrongAnimal::makeSound() const
{
   std::cout << "WrongAnimal speaks" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}
