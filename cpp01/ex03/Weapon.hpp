/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:35:55 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/10 17:36:14 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
    std::string type;
    public:
    Weapon();
    Weapon(std::string new_type);
    const std::string getType(void);
    void setType(std::string new_str);
};

#endif