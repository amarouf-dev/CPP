/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 21:50:02 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/21 17:15:58 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ScavTrap a("Abdo");
    a.attack("Hello");
    ScavTrap b(a);
    b.guardGate();
    ClapTrap s;
    s.attack("NAME");
    
}