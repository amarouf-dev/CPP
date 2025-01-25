/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:21:01 by amarouf           #+#    #+#             */
/*   Updated: 2024/12/13 18:19:35 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
class HumanA
{
    private:
    std::string name;
    Weapon& weapon_ref;
    public:
    HumanA(std::string name, Weapon weapon_ref): name(name),  weapon_ref(weapon_ref){};
    void attack();
};