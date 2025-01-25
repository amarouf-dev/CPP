/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:21:16 by amarouf           #+#    #+#             */
/*   Updated: 2024/12/15 14:51:05 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
// #include "HumanA.hpp"
// #include "HumanB.hpp"

class Weapon
{
    private:
    std::string type;
    
    public:
    Weapon(std::string type): type(type){};
    const std::string getType();
    void setType(std::string new_type);
};