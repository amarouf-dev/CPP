/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:40:02 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/21 18:45:11 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#pragma once

class DiamondTrap: public ScavTrap , public FragTrap
{
    private:
    std::string Name;
    public:
    DiamondTrap();
    DiamondTrap(std::string );
    DiamondTrap(const DiamondTrap& );
    DiamondTrap& operator= (const DiamondTrap& );
    ~DiamondTrap();
    void whoAmI();
};
