/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:49:23 by amarouf           #+#    #+#             */
/*   Updated: 2024/11/22 14:41:34 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int i = 0;
    Zombie *horde;

    horde = zombieHorde(5, "Zombie");
    while (i < 5)
    {
        horde[i].announce();
        std::cout << "\n" << std::endl;
        delete &horde[i];
        i++;
    }
}
