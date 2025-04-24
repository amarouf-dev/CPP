/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:26:13 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/24 18:36:15 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap's Default constructor called\n";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string New_name): ClapTrap(New_name)
{
    std::cout << "ScavTrap's Parameterized Constructor Called\n";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ScavTrap1)
{
    std::cout << "ScavTrap's Copy Assignment Operator Called\n";
    this->Name			= ScavTrap1.Name;
    this->Hit_points    = ScavTrap1.Hit_points;
    this->Energy_points = ScavTrap1.Energy_points;
    this->Attack_damage = ScavTrap1.Attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap1)
{
	std::cout << "ScavTrap's Copy Constructor\n";
    *this = ScavTrap1;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap's Distructor\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode\n"; 
}

void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_points == 0 || this->Hit_points == 0)
	{
		std::cout << "ScavTrap can't do anything\n";
		return ;
	}
	this->Energy_points --;
    std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing "
        << this->Attack_damage << " points of damage!" << std::endl;
	std::cout << "Remaining Energy-points " << this->Energy_points << std::endl;
}
