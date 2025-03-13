/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:35:59 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/13 01:52:15 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string new_type)
{
    type = new_type;
}

const std::string Weapon::getType(void)
{
    return (type);
}

void Weapon::setType(std::string new_str)
{
    type = new_str;
}
