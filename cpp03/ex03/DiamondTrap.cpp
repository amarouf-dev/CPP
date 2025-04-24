/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:40:25 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/24 18:41:09 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap("Default_clap_name") , Name("Default")
{
    std::cout << "DiamondTrap's Default Constructor Called\n";
    this->Hit_points  = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(std::string New_Name):  ScavTrap( New_Name + "_clap_name") , Name(New_Name)
{
    std::cout << "DiamondTrap's Parameterized Constructor Called\n";
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& DiamondTrap1)
{
    std::cout << "DiamondTrap's Copy Assignment Operator Called\n";
    this->Name			= DiamondTrap1.Name;
    this->Hit_points    = DiamondTrap1.Hit_points;
    this->Energy_points = DiamondTrap1.Energy_points;
    this->Attack_damage = DiamondTrap1.Attack_damage;
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

