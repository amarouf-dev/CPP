/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:21:37 by amarouf           #+#    #+#             */
/*   Updated: 2024/12/13 18:06:23 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon *weapon;
    public:
    HumanB(std::string name): name(name){};
    void setWeapon(Weapon new_weapon);
    void attack();
};