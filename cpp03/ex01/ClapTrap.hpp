/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:50:15 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/20 16:41:34 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    protected:
    std::string Name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;

    public:
    ClapTrap();
    ClapTrap(std::string NewName);
    ClapTrap& operator=(const ClapTrap& Clap);
    ClapTrap(const ClapTrap& Clap);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
};