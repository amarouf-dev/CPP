/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:22:53 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/21 17:36:44 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap's Default constructors Called\n";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
};

FragTrap::FragTrap(std::string New_name): ClapTrap(New_name)
{
    std::cout << "FragTrap's Parameterized Constructor Called\n";
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap& FragTrap::operator= (const FragTrap& FragTrap1)
{
    std::cout << "FragTrap's Copy Assignment Operator Called\n";
    this->Name			= FragTrap1.Name;
    this->Hit_points    = FragTrap1.Hit_points;
    this->Energy_points = FragTrap1.Energy_points;
    this->Attack_damage = FragTrap1.Attack_damage;
    return (*this);
}

FragTrap::FragTrap(const FragTrap& FragTrap1)
{
    std::cout << "FragTrap's Copy Constructor\n";
    *this = FragTrap1;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap's Distructor\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "positive high fives\n";
}
