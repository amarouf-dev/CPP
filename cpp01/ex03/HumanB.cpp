/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:29:39 by amarouf           #+#    #+#             */
/*   Updated: 2024/12/13 18:08:27 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once

#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->name << "attacks with their" << this->weapon->getType();
}

void HumanB::setWeapon(Weapon new_weapon)
{
    
    this->weapon = &new_weapon;
}
