/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:40:25 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/21 18:56:27 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap("Default_clap_name") , Name("Default")
{
    std::cout << "DiamondTrap's Default Constructor Called\n";
    this->ScavTrap::Hit_points  = FragTrap::Hit_points;
    this->ScavTrap::Energy_points = ScavTrap::Energy_points;
    this->ScavTrap::Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(std::string New_Name):  ScavTrap( New_Name + "_clap_name") , Name(New_Name)
{
    std::cout << "DiamondTrap's Parameterized Constructor Called\n";
    this->ScavTrap::Hit_points = FragTrap::Hit_points;
    this->ScavTrap::Energy_points = ScavTrap::Energy_points;
    this->ScavTrap::Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& DiamondTrap1)
{
    std::cout << "DiamondTrap's Copy Assignment Operator Called\n";
    this->ScavTrap::Name			= DiamondTrap1.ScavTrap::Name;
    this->ScavTrap::Hit_points    = DiamondTrap1.ScavTrap::Hit_points;
    this->ScavTrap::Energy_points = DiamondTrap1.ScavTrap::Energy_points;
    this->ScavTrap::Attack_damage = DiamondTrap1.ScavTrap::Attack_damage;
    return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap1)
{
    std::cout << "FragTrap's Copy Constructor\n";
    *this = DiamondTrap1;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap's Distructor\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap's name: " << Name << std::endl;
    std::cout << "ClapTrap's name: " << ScavTrap::Name << std::endl;;
}

