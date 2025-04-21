/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:17:22 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/21 17:22:47 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string);
    FragTrap(const FragTrap&);
    FragTrap& operator= (const FragTrap&);
    ~FragTrap();
    void highFivesGuys(void);
};
