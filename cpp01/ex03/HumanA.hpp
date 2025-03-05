/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:21:01 by amarouf           #+#    #+#             */
/*   Updated: 2025/01/25 21:00:46 by amarouf          ###   ########.fr       */
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
    HumanA(std::string new_name, Weapon new_weapon_ref): name(new_name),  weapon_ref(new_weapon_ref){};
    void attack();
};