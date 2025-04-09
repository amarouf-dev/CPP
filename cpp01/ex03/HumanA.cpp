/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:43:46 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/13 01:54:44 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_wpn) : wpn(new_wpn), name(new_name){}

void HumanA::attack(void)
{
   std::cout << name;
   std::cout << " attacks with their ";
   std::cout << wpn.getType() << std::endl;
}