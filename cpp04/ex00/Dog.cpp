/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:46 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 09:46:42 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog's Default Constructor\n";
}

Dog& Dog::operator=(const Dog& Dog1)
{
    std::cout << "Dog's Parametrized Constructor\n";
    if (this != &Dog1)
        this->type = Dog1.type;
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
}

void Dog::makeSound() const
{
   std::cout << "Dog Barks" << std::endl;
}
