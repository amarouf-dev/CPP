/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:45:22 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 17:41:52 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain's Default Constructor\n";
}

Brain& Brain::operator=(const Brain& Brain1)
{
    std::cout << "Brain's Parametrized Constructor\n";
    if (this != &Brain1)
    {
        for (int i = 0; i < 100; i ++)
            this->ideas[i] =  Brain1.ideas[i];       
    }
    return *this;
}

Brain::Brain(const Brain& Brain1)
{
    std::cout << "Brain's Copy Constructor\n";
    *this = Brain1;
}

Brain::~Brain()
{
    std::cout << "Brain's Destructor\n";
}
   