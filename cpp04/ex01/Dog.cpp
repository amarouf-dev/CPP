/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:46 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/13 08:31:13 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog's Default Constructor\n";
     Br = new  Brain();
}

Dog::Dog(const Dog& Dog1)
{
    std::cout << "Dog's Copy Constructor\n";
    this->type = Dog1.type;
    this->Br = new Brain(*Dog1.Br);
}

Dog& Dog::operator=(const Dog& Dog1)
{
    std::cout << "Dog's Copy Assignment Operator\n";
    if (this != &Dog1)
    {    
        delete this->Br;
        Br = new Brain(*Dog1.Br);
        this->type = Dog1.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog's Destructor\n";
    delete Br;
}

void Dog::makeSound() const
{
   std::cout << "Dog Barks" << std::endl;
}
