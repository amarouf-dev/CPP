/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:50:02 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/21 17:34:18 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
    // ScavTrap a("Abdo");
    // a.attack("Hello");
    // ScavTrap b(a);
    // b.guardGate();
    // ClapTrap s;
    // s.attack("NAME");

    FragTrap a("BEST NAME");

    FragTrap b = a;

    b.attack("Worst name");

    
}