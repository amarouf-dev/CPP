/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:50:29 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/16 22:15:20 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Default"), Hit_points(10), Energy_points(10), Attack_damage(0){};
ClapTrap::ClapTrap(std::string NewName): Name(NewName){};

ClapTrap& ClapTrap::operator=(const ClapTrap& Clap)
{
    this->Name          = Clap.Name;
    this->Hit_points    = Clap.Hit_points;
    this->Energy_points = Clap.Energy_points;
    this->Attack_damage = Clap.Attack_damage;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& Clap)
{
    *this = Clap;
}


void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap" << this->Name << "attacks" << target << ", causing"
        << this->Attack_damage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
