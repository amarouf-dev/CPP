/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Zombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:49:35 by amarouf           #+#    #+#             */
/*   Updated: 2024/11/22 12:00:35 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
    std::string name;

    public:
    std::string getName();
    void setName(std::string new_name);
    void announce( void )
    {
        std::cout << name << ": BraiiiiiiinnnzzzZ...";
    }
};
Zombie* zombieHorde( int N, std::string name );

#endif
