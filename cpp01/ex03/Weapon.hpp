/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:21:16 by amarouf           #+#    #+#             */
/*   Updated: 2025/01/25 21:00:08 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
    private:
    std::string type;
    
    public:
    Weapon(std::string str): type(str){};
    const std::string getType();
    void setType(std::string new_type);
};