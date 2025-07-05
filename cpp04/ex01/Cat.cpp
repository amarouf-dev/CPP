/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:46 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/13 08:35:29 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat's Default Constructor\n";
    Br = new  Brain();
}

Cat::Cat(const Cat& Cat1)
{
    std::cout << "Cat's Copy Constructor\n";
    this->type = Cat1.type;
    this->Br = new Brain(*Cat1.Br);
}

Cat& Cat::operator=(const Cat& Cat1)
{
    std::cout << "Cat's Copy Assignment Operator\n";
    if (this != &Cat1)
    {    
        delete this->Br;
        Br = new Brain(*Cat1.Br);
        this->type = Cat1.type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat's Destructor\n";
    delete Br;
}

void Cat::makeSound() const
{
   std::cout << "Cat meows" << std::endl;
}
