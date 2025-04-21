/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:50:29 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/19 21:23:15 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Default"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Default constructors Called\n";
};
ClapTrap::ClapTrap(std::string NewName): Name(NewName), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Parameterized Constructor Called\n";
};

ClapTrap& ClapTrap::operator=(const ClapTrap& Clap)
{
	std::cout << "Copy Assignment Operator Called\n";
    this->Name			= Clap.Name;
    this->Hit_points    = Clap.Hit_points;
    this->Energy_points = Clap.Energy_points;
    this->Attack_damage = Clap.Attack_damage;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& Clap)
{
	std::cout << "Copy Constructor\n";
    *this = Clap;
}

ClapTrap::~ClapTrap ()
{
	std::cout << "Distructor Called\n";
}


void ClapTrap::attack(const std::string& target)
{
	if (this->Energy_points == 0 || this->Hit_points == 0)
	{
		std::cout << "ClapTrap cant do anything\n";
		return ;
	}
	this->Energy_points --;
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing "
        << this->Attack_damage << " points of damage!" << std::endl;
	std::cout << "Remaining Energy-points " << this->Energy_points << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Energy_points == 0 || this->Hit_points == 0)
	{
		std::cout << "ClapTrap cant do anything\n";
		return ;
	}
	this->Hit_points -= amount;
	if (this->Hit_points < 0)
		this->Hit_points = 0;
    std::cout << "ClapTrap takes " << amount << " damage\n";
	std::cout << "Remaining Hit-points " << this->Hit_points << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points == 0 || this->Hit_points == 0)
	{
		std::cout << "ClapTrap cant do anything\n";
		return ;
	}
	this->Energy_points --;
	this->Hit_points += amount;
    std::cout << "ClapTrap repairs itself, it gets" << amount << "hit points back\n";
	std::cout << "Remaining Energy-points " << this->Energy_points << std::endl;
}
