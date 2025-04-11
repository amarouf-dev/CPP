/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:49:32 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/10 17:36:57 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("default"){}

HumanB::HumanB(std::string new_name) : name(new_name){}

void HumanB::setWeapon(Weapon &new_wpn)
{
    wpn = &new_wpn;
}

void HumanB::attack(void)
{
   std::cout << name;
   std::cout << " attacks with their ";
   std::cout << wpn->getType()  << std::endl;
}

