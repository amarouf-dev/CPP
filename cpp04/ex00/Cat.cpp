/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:46 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/30 07:42:13 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat's Default Constructor\n";
}

Cat& Cat::operator=(const Cat& Cat1)
{
    std::cout << "Cat's Parametrized Constructor\n";
    if (this != &Cat1)
        this->type = Cat1.type;
    return *this;
}

Cat::Cat(const Cat& Cat1)
{
    std::cout << "Cat's Copy Constructor\n";
    *this = Cat1;
}

Cat::~Cat()
{
    std::cout << "Cat's Destructor\n";
}

void Cat::makeSound() const
{
   std::cout << "Cat meows" << std::endl;
}
