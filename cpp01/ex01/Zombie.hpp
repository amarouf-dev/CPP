/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:49:24 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/10 15:55:07 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include  <iostream>
#include <stdlib.h>

class Zombie
{
    private:
    std::string name;
    public:
    void setName(std::string name);
    std::string getName(void);
    void announce( void );
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif