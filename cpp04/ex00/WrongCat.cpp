/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:46 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/02 18:21:46 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat's Default Constructor\n";
}

WrongCat& WrongCat::operator=(const WrongCat& WrongCat1)
{
    std::cout << "WrongCat's Parametrized Constructor\n";
    if (this != &WrongCat1)
        this->type = WrongCat1.type;
    return *this;
}

WrongCat::WrongCat(const WrongCat& WrongCat1)
{
    std::cout << "WrongCat's Copy Constructor\n";
    *this = WrongCat1;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat's Destructor\n";
}

void WrongCat::makeSound() const
{
   std::cout << "WrongCat meows" << std::endl;
}
