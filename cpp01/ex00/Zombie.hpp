/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:10:37 by amarouf           #+#    #+#             */
/*   Updated: 2024/11/15 12:23:11 by amarouf          ###   ########.fr       */
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
    void announce( void )
    {
        std::cout << name << ": BraiiiiiiinnnzzzZ...";
    }
};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
