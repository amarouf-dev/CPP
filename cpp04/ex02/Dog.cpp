/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:46 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/01 17:18:32 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    this->type = "Dog";
     Br = new  Brain();
    std::cout << "Dog's Default Constructor\n";
}

Dog& Dog::operator=(const Dog& Dog1)
{
    std::cout << "Dog's Parametrized Constructor\n";
    if (this != &Dog1)
    {    
        this->Br = new Brain(*Dog1.Br);
        this->type = Dog1.type;
    }
    return *this;
}

Dog::Dog(const Dog& Dog1)
{
    std::cout << "Dog's Copy Constructor\n";
    *this = Dog1;
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
